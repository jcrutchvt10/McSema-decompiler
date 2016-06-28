#!/usr/bin/env python
import binaryninja as binja
import argparse
import os
import struct
import sys
import magic
import time
import CFG_pb2

_DEBUG = False

EXT_MAP = {}
EXT_DATA_MAP = {}
EXTERNALS = set()
RECOVERED = set()

EXTERNAL_NAMES = [
    '@@GLIBC_'
]

ENDIAN_TO_STRUCT = {
    binja.core.LittleEndian: '<',
    binja.core.BigEndian: '>'
}


def DEBUG(s):
    if _DEBUG:
        sys.stdout.write('{}\n'.format(str(s)))


def process_externals(pb_mod):
    # type: (CFG_pb2.Module) -> None
    for ext in EXTERNALS:
        if fixed_in_map(ext, EXT_MAP):
            argc, conv, ret, sign = get_from_ext_map(ext)

            # Save the external function info to the module
            pb_extfn = pb_mod.external_funcs.add()
            pb_extfn.symbol_name = fix_external_name(ext)
            pb_extfn.argument_count = argc
            pb_extfn.calling_convention = conv
            pb_extfn.has_return = ret == 'N'
            pb_extfn.no_return = ret == 'Y'
        elif fixed_in_map(ext, EXT_DATA_MAP):
            dname = fix_external_name(ext)
            dsize = EXT_DATA_MAP[dname]

            # Save the data info to the module
            pb_extdata = pb_mod.external_data.add()
            pb_extdata.symbol_name = dname
            pb_extdata.data_size = dsize
        else:
            DEBUG('Unknown external symbol: {}'.format(ext))


def read_dword(bv, addr):
    # type: (binja.BinaryView, int) -> int
    data = bv.read(addr, 4)
    fmt = '{}L'.format(ENDIAN_TO_STRUCT[bv.endianness])
    return struct.unpack(fmt, data)[0]


def read_qword(bv, addr):
    # type: (binja.BinaryView, int) -> int
    data = bv.read(addr, 8)
    fmt = '{}Q'.format(ENDIAN_TO_STRUCT[bv.endianness])
    return struct.unpack(fmt, data)[0]


def search_displ_reg(il):
    # type: (binja.LowLevelILInstruction) -> str
    """
    Searches for the register used in a phrase+displacement
    ex: dword [eax * 4 + 0x08040000] -> eax
    """
    # If the register is found, return it
    if il.operation == binja.core.LLIL_REG:
        return il.src

    # The il may be inside a LLIL_LOAD
    if il.operation == binja.core.LLIL_LOAD:
        return search_displ_reg(il.src)

    # Continue to search the left and right operands
    return search_displ_reg(il.left) or search_displ_reg(il.right)


def search_displ_base(il):
    # type: (binja.LowLevelILInstruction) -> int
    """
    Searches for the base address used in a phrase+displacement
    ex: dword [eax * 4 + 0x08040000] -> 0x08040000
    """
    # The base will be found in an LLIL_ADD
    if il.operation == binja.core.LLIL_ADD:
        # One of the operands is a constant, the other is a register or expression
        if il.left.operation == binja.core.LLIL_CONST:
            return il.left.value
        else:
            return il.right.value

    # The il may be inside a LLIL_LOAD
    if il.operation == binja.core.LLIL_LOAD:
        return search_displ_base(il.src)

    # Continue to search the left and right operands
    return search_displ_base(il.left) or search_displ_base(il.right)


def does_return(fname):
    # type: (str) -> bool
    # Try to find this function in the externals map
    if fixed_in_map(fname, EXT_MAP):
        argc, conv, ret, sign = get_from_ext_map(fname)
        return ret == 'N'
    # If it isn't there, assume it returns
    return True


def handle_external_ref(fname):
    # type: (str) -> str
    # Fix and save the external's name
    fixed = fix_external_name(fname)
    EXTERNALS.add(fixed)
    return fixed


def is_external_ref(bv, addr):
    # type: (binja.BinaryView, int) -> bool
    sym = bv.get_symbol_at(addr)
    if sym is None:
        return False

    # This is temporary until we can access different segments in binja
    # Doesn't work for Mach-O because binja treats all functions as imports
    if 'Imported' in sym.type:
        return True

    # Check if any external names are in the symbol
    for extsign in EXTERNAL_NAMES:
        if extsign in sym.name:
            DEBUG('Assuming external reference because: {} in {}'.format(extsign, sym.name))
            return True

    return False


def set_reference(pb_inst, op_type, ref_type, ref):
    # type: (CFG_pb2.Instruction, str, CFG_pb2.RefType, int) -> None
    if op_type == 'IMM':
        pb_inst.imm_reference = ref
        pb_inst.imm_ref_type = ref_type
    elif op_type == 'MEM':
        pb_inst.mem_reference = ref
        pb_inst.mem_ref_type = ref_type
    else:
        DEBUG('Unknown ref type: {}'.format(op_type))


def is_lea(bv, il):
    # type: (binja.BinaryView, binja.LowLevelILInstruction) -> bool
    txt = get_inst_text(bv, il.address)
    return 'lea' in txt[0].text


def resolve_refs(bv, pb_inst, il, op_type=None):
    """
    Recursively searches through an IL instruction's operands for any
    code/data references. Keeps track of whether the reference is a memory
    reference or an immediate value. When a reference is found, its
    info is added to the protobuf

    Args:
        bv (binja.BinaryView)
        pb_inst (CFG_pb2.Instruction)
        il (binja.LowLevelILInstruction)
        op_type (str)
    """

    # Skip strings, indices, etc
    if not isinstance(il, binja.LowLevelILInstruction):
        return

    if il.operation == binja.core.LLIL_CONST:
        # Get the op type for this value
        if op_type is None:
            # Binja treats lea as a regular LLIL_SET_REG
            # Need to make sure it's a MEM reference
            if is_lea(bv, il):
                op_type = 'MEM'
            else:
                # Otherwise any constant is an immediate
                op_type = 'IMM'

        # Assume that a value outside the binary range is not an address
        ref = il.value
        if bv.start <= ref <= bv.end:
            # TODO: check segments when available in api
            # Right now we check if the reference is code by checking
            # if that address happens to be a function
            if bv.get_function_at(bv.platform, ref):
                ref_type = CFG_pb2.Instruction.CodeRef
            else:
                ref_type = CFG_pb2.Instruction.DataRef

            DEBUG('Setting {} reference @ {:x} to {:x}'.format(op_type, il.address, ref))
            set_reference(pb_inst, op_type, ref_type, ref)

    elif il.operation == binja.core.LLIL_STORE:
        # The destination is known to be MEM, src is unknown
        resolve_refs(bv, pb_inst, il.dest, 'MEM')
        resolve_refs(bv, pb_inst, il.src)
    elif il.operation == binja.core.LLIL_LOAD:
        # The src is known to be MEM
        resolve_refs(bv, pb_inst, il.src, 'MEM')
    else:
        # All other instructions, go through all operands and propagate the op_type
        for op in il.operands:
            resolve_refs(bv, pb_inst, op, op_type)


def handle_goto(bv, pb_inst, ilfunc, il):
    """
    Args:
        bv (binja.BinaryView)
        pb_inst (CFG_pb2.Instruction)
        ilfunc (binja.LowLevelILFunction)
        il (binja.LowLevelILInstruction)
    """
    target = ilfunc[il.dest].address
    if is_external_ref(bv, target):
        DEBUG('External jmp: {:x}'.format(target))
        jmp_func = bv.get_function_at(bv.platform, target)
        fname = handle_external_ref(jmp_func.symbol.name)
        pb_inst.ext_call_name = fname

        if not does_return(fname):
            DEBUG('Noreturn jmp: {}'.format(fname))
    else:
        pb_inst.true_target = target


def add_call(bv, pb_inst, call_addr, new_eas):
    """
    Args:
        bv (binja.BinaryView)
        pb_inst (CFG_pb2.Instruction)
        call_addr (int)
        new_eas (set)
    """
    # Get the function at the given address
    call_func = bv.get_function_at(bv.platform, call_addr)
    if is_external_ref(bv, call_addr):
        fname = handle_external_ref(call_func.symbol.name)
        pb_inst.ext_call_name = fname

        if not does_return(fname):
            DEBUG('Noreturn call: {}'.format(fname))
    else:
        DEBUG('Internal call: {}'.format(call_func.symbol.name))

        # Add a reference to the called address
        set_reference(pb_inst, 'MEM', CFG_pb2.Instruction.CodeRef, call_addr)

        # Save this address to recover it later
        new_eas.add(call_addr)

        # Check if this call doesn't return
        if not call_func.type.can_return:
            DEBUG('Local noreturn call: {:x}'.format(call_addr))
            pb_inst.local_noreturn = True


def handle_call(bv, pb_inst, ilfunc, il, new_eas):
    """
    Args:
        bv (binja.BinaryView)
        pb_inst (CFG_pb2.Instruction)
        ilfunc (binja.LowLevelILFunction)
        il (binja.LowLevelILInstruction)
        new_eas (set)
    """
    # Get the operand for the call
    call_op = il.dest
    if call_op.operation == binja.core.LLIL_CONST:
        # If the call is to an immediate symbol/address, process it as usual
        call_addr = call_op.value
        add_call(bv, pb_inst, call_addr, new_eas)
    elif call_op.operation == binja.core.LLIL_REG:
        # If the call is to a register, check if the value can be resolved
        reg = call_op.src
        reg_val = ilfunc.source_function.get_reg_value_at(bv.arch, il.address, reg)

        # Check if binja was able to statically resolve the value
        if reg_val.type == binja.core.ConstantValue:
            target = reg_val.value
            DEBUG('Register call resolved: {} == {}'.format(reg, target))
            add_call(bv, pb_inst, target, new_eas)
    else:
        # If this ever happens it should be handled
        DEBUG('Unknown call op type: {} @ {:x}'.format(call_op.operation_name, il.address))


def handle_jump_table(bv, pb_inst, ilfunc, il, new_eas):
    """
    Args:
        bv (binja.BinaryView)
        pb_inst (CFG_pb2.Instruction)
        ilfunc (binja.LowLevelILFunction)
        il (binja.LowLevelILInstruction)
        new_eas (set)
    """
    # Get the base address of the jump table
    base = search_displ_base(il.dest)
    DEBUG('\tJMPTable base: {:x}'.format(base))

    # Get the register that this jump table is based on
    jump_reg = search_displ_reg(il.dest)

    # Try to resolve the range of possible values for this register
    jump_range = ilfunc.source_function.get_reg_value_at(bv.arch, il.address, jump_reg)
    if jump_range.type not in [binja.core.SignedRangeValue, binja.core.UnsignedRangeValue]:
        raise Exception('Unable to resolve register range for jump table: {}@{:x}'.format(jump_reg, il.address))

    # Pick the correct reader for this binary's address size
    addrsize = bv.address_size
    read_entry = {
        4: read_dword,
        8: read_qword
    }[addrsize]

    # Read in all of the table entries
    for i in xrange(jump_range.start, jump_range.end + jump_range.step, jump_range.step):
        jump_entry = read_entry(bv, i * addrsize + base)
        pb_inst.jump_table.table_entries.append(jump_entry)

        # Add this address to be recovered if it's the start of a function
        if bv.get_function_at(bv.platform, jump_entry):
            new_eas.add(jump_entry)

        DEBUG('\t\tAdding JMPTable entry {}: {:x}'.format(i, jump_entry))

    # Set to 0 for now
    pb_inst.jump_table.zero_offset = 0
    # TODO: jump_table.offset_from_data, need to know the start of the segment for this


def get_inst_text(bv, addr):
    # type: (binja.BinaryView, int) -> list
    data = bv.read(addr, 16)
    return bv.arch.get_instruction_text(data, addr)[0]


def read_inst_bytes(bv, il):
    # type: (binja.BinaryView, binja.LowLevelILInstruction) -> str
    inst_data = bv.read(il.address, 16)
    inst_info = bv.arch.get_instruction_info(inst_data, il.address)
    return inst_data[:inst_info.length]


def add_inst(bv, pb_block, ilfunc, il, new_eas):
    """
    Args:
        bv (binja.BinaryView)
        pb_block (CFG_pb2.Block)
        ilfunc (binja.LowLevelILFunction)
        il (binja.LowLevelILInstruction)
        new_eas (set)

    Returns:
        CFG_pb2.Instruction
    """
    pb_inst = pb_block.insts.add()
    pb_inst.inst_bytes = read_inst_bytes(bv, il)
    pb_inst.inst_addr = il.address
    pb_inst.inst_len = len(pb_inst.inst_bytes)

    # Fill in optional fields depending on the type of instruction
    op = il.operation
    if op == binja.core.LLIL_GOTO:
        handle_goto(bv, pb_inst, ilfunc, il)
        return pb_inst

    elif op == binja.core.LLIL_IF:
        # Save the addresses of the true and false branches
        pb_inst.true_target = ilfunc[il.true].address
        pb_inst.false_target = ilfunc[il.false].address
        return pb_inst

    elif op == binja.core.LLIL_CALL:
        handle_call(bv, pb_inst, ilfunc, il, new_eas)
        return pb_inst

    elif op == binja.core.LLIL_PUSH:
        isize = pb_inst.inst_len
        target = il.src.operands[0]
        # call $+5 is translated in IL as push(next_addr)
        # Check if this is the case and handle it
        if isize == 5 and target == il.address + 5:
            DEBUG('Internal call $+5: {:x}'.format(target))
            pb_inst.local_noreturn = True
            pb_inst.imm_reference = target
            pb_inst.imm_ref_type = CFG_pb2.Instruction.CodeRef

            # If the next address is a function, add it to be recovered
            if bv.get_function_at(bv.platform, target):
                DEBUG('Adding EA from self call: {:x}'.format(target))
                new_eas.add(target)
            return pb_inst

    elif op == binja.core.LLIL_JUMP_TO:
        # This is a jump to an entry in a jump table
        DEBUG('JMPTable instruction found @ {:x}'.format(il.address))
        handle_jump_table(bv, pb_inst, ilfunc, il, new_eas)
        return pb_inst

    # Resolve any references in this instruction
    resolve_refs(bv, pb_inst, il)

    return pb_inst


def add_block(pb_func, block):
    # type: (CFG_pb2.Function, binja.BasicBlock) -> CFG_pb2.Block
    pb_block = pb_func.blocks.add()
    pb_block.base_address = block.start

    # Gather all successor block addresses
    follows = [edge.target for edge in block.outgoing_edges]
    pb_block.block_follows.extend(follows)

    return pb_block


def recover_function(bv, pb_func, new_eas):
    # type: (binja.BinaryView, CFG_pb2.Function, set) -> None
    func = bv.get_function_at(bv.platform, pb_func.entry_address)
    ilfunc = func.lifted_il

    for block in func:
        pb_block = add_block(pb_func, block)

        # Iterate through the block, keeping track of where we are
        inst_idx = block.start
        while inst_idx < block.end:
            # Get the IL for the current instruction
            il = ilfunc[func.get_lifted_il_at(bv.arch, inst_idx)]

            # Add the instruction data
            pb_inst = add_inst(bv, pb_block, ilfunc, il, new_eas)
            inst_idx += pb_inst.inst_len


def add_function(pb_mod, addr):
    # type: (CFG_pb2.Module, int) -> CFG_pb2.Function
    pb_func = pb_mod.internal_funcs.add()
    pb_func.entry_address = addr
    return pb_func


def fix_external_name(name):
    # type: (str) -> str
    # Don't do anything if the name is already in the maps
    if name in EXT_MAP or name in EXT_DATA_MAP:
        return name

    # TODO: unlinked elf case

    # Check for common cases
    if name.endswith('_0'):
        fixed = name[:-2]
        if fixed in EXT_MAP:
            return fixed

    if name.startswith('__imp_'):
        fixed = name[6:]
        if fixed in EXT_MAP:
            return fixed

    # Check for any external names in the symbol and remove them
    for extName in EXTERNAL_NAMES:
        if extName in name:
            name = name[:name.find(extName)]
            break
    return name


def fixed_in_map(name, ext_map):
    # type: (str) -> bool
    return fix_external_name(name) in ext_map


def get_from_ext_map(name):
    # type: (str) -> (int, int, chr, str)
    return EXT_MAP[fix_external_name(name)]


def get_export_type(bv, name, addr):
    # type: (binja.BinaryView, str, int) -> (int, int, chr)
    DEBUG('Processing export name: {} @ {:x}'.format(name, addr))

    # All externals should ideally be defined in the std_defs file
    if fixed_in_map(name, EXT_MAP):
        DEBUG('Export found in std_defs')
        argc, conv, ret, sign = get_from_ext_map(name)
    else:
        # Attempt to figure out the information from the binary
        # It's best to have this defined already
        ftype = bv.get_function_at(bv.platform, addr).type

        argc = len(ftype.parameters)
        ret = 'N' if ftype.can_return else 'Y'
        # TODO: conv
        conv = CFG_pb2.ExternalFunction.CalleeCleanup
    return argc, conv, ret


def process_entry_point(bv, pb_mod, name, addr):
    # type: (binja.BinaryView, CFG_pb2.Module, str, int) -> CFG_pb2.Function
    # Create the entry point
    pb_entry = pb_mod.entries.add()
    pb_entry.entry_name = name
    pb_entry.entry_address = addr

    # Add extra data
    argc, conv, ret = get_export_type(bv, name, addr)
    pb_entry.entry_extra.entry_argc = argc
    pb_entry.entry_extra.entry_cconv = conv
    pb_entry.entry_extra.does_return = ret == 'N'

    DEBUG('At EP {}:{:x}'.format(name, addr))
    pb_func = add_function(pb_mod, addr)
    return pb_func


def recover_cfg(bv, entries, outf):
    # type: (binja.BinaryView, dict, file) -> None
    pb_mod = CFG_pb2.Module()
    pb_mod.module_name = os.path.basename(bv.file.filename)
    DEBUG('PROCESSING: {}'.format(pb_mod.module_name))

    # TODO: segment related processing (not in api)

    # Process the main entry points
    new_eas = set()
    for fname, faddr in entries.iteritems():
        DEBUG('Recovering: {}'.format(fname))

        # Keep track of recovered functions
        RECOVERED.add(faddr)

        # Recover the function
        pb_func = process_entry_point(bv, pb_mod, fname, faddr)
        recover_function(bv, pb_func, new_eas)
    new_eas.difference_update(RECOVERED)

    # Process all new functions found
    while len(new_eas) > 0:
        # Get and validate the next address
        ea = new_eas.pop()
        if is_external_ref(bv, ea):
            raise Exception('Function EA not code: {:x}'.format(ea))
        DEBUG('Recovering: {}'.format(ea))

        # Keep track of recovered functions
        RECOVERED.add(ea)

        # Recover the function
        pb_func = add_function(pb_mod, ea)
        recover_function(bv, pb_func, new_eas)

        # Make sure we don't repeat any functions
        new_eas.difference_update(RECOVERED)

    # Process any externals that were used
    process_externals(pb_mod)

    # Save the resulting protobuf
    outf.write(pb_mod.SerializeToString())
    outf.close()

    DEBUG('Saved to: {}'.format(outf.name))


def process_defs_file(f):
    # type: (file) -> None
    """ Load the std_defs data into the externals maps """
    lines = [l.strip() for l in f.readlines()]
    for l in lines:
        if len(l) == 0 or l[0] == '#':
            continue

        if l.startswith('DATA:'):
            # Process external data
            mark, dataname, datasize = l.split()
            EXT_DATA_MAP[dataname] = int(datasize)
        else:
            # Process external function
            data = l.split()
            funcname, argc, conv, ret = data[:4]
            sign = data[4] if len(data) == 5 else None

            # Get real calling convention
            if conv == 'C':
                realconv = CFG_pb2.ExternalFunction.CallerCleanup
            elif conv == 'E':
                realconv = CFG_pb2.ExternalFunction.CalleeCleanup
            elif conv == 'F':
                realconv = CFG_pb2.ExternalFunction.FastCall
            else:
                raise Exception('Unknown calling convention: {}'.format(conv))

            # Validate return type
            if ret not in ['Y', 'N']:
                raise Exception('Unknown return type: {}'.format(ret))

            EXT_MAP[funcname] = (int(argc), realconv, ret, sign)
    f.close()


def filter_entries(bv, symbols):
    # type: (binja.BinaryView, list) -> dict
    """ Filters out any function symbols that are not in the binary """
    func_syms = [func.symbol.name for func in bv.functions]
    filtered = {}
    for symb in symbols:
        if symb in func_syms:
            filtered[symb] = bv.symbols[symb].address
        else:
            DEBUG('Could not find symbol "{}" in binary'.format(symb))
    return filtered


def get_all_exports(bv):
    # type: (binja.BinaryView) -> dict
    # TODO: Find all exports (not in api)
    return {bv.entry_function.symbol.name: bv.entry_point}


def main():
    parser = argparse.ArgumentParser()

    parser.add_argument('--entry-symbol', nargs='*',
                        help='Symbols(s) to start disassembling from')

    parser.add_argument('-o', '--output',
                        default=None,
                        help='The output control flow graph recovered from this file')

    parser.add_argument('-d', '--debug', action='store_true',
                        help='Enable verbose debugging mode')

    parser.add_argument('-s', '--std-defs',
                        nargs='*', default=[],
                        type=argparse.FileType('r'),
                        help='std_defs file: definitions and calling conventions of imported functions and data')

    parser.add_argument('-e', '--exports-to-lift',
                        type=argparse.FileType('r'), default=None,
                        help='A file containing exported functions to lift, one per line. '
                             'If not specified, all exports will be lifted.')

    parser.add_argument('file', help='Binary to recover control flow graph from')

    args = parser.parse_args(sys.argv[1:])

    # Enable debugging
    if args.debug:
        global _DEBUG
        _DEBUG = True

    curpath = os.path.dirname(__file__)
    filepath = os.path.relpath(args.file, curpath)

    # Resolve path to output file
    if args.output:
        outpath = os.path.dirname(args.output)

        # Attempt to create directories to the output file
        try:
            os.mkdir(outpath)
        except OSError:
            pass

        outf = open(args.output, 'wb')
    else:
        # Default output file is "{filename}_binja.cfg"
        outf = open(os.path.join(curpath, filepath + "_binja.cfg"), 'wb')
        outpath = os.path.join(curpath, filepath)

    # Look at magic bytes to choose the right BinaryViewType
    magic_type = magic.from_file(os.path.join(curpath, filepath))
    if 'ELF' in magic_type:
        bv_type = binja.BinaryViewType['ELF']
    elif 'PE32' in magic_type:
        bv_type = binja.BinaryViewType['PE']
    elif 'Mach-O' in magic_type:
        bv_type = binja.BinaryViewType['Mach-O']
    else:
        bv_type = binja.BinaryViewType['Raw']
        # Don't think this can be used for anything, quitting for now
        DEBUG('Unknown binary type: "{}"'.format(magic_type))
        return

    # Load and analyze the binary
    bv = bv_type.open(filepath)
    bv.update_analysis()
    time.sleep(0.1)  # May need to be changed

    # NOTE: at the moment binja will not load a binary
    # that doesn't have an entry point
    if len(bv) == 0:
        DEBUG("Binary could not be loaded in binja, is it linked?")
        return

    # Load std_defs files
    if len(args.std_defs) > 0:
        for dfile in args.std_defs:
            DEBUG('Loading standard definitions file: {}'.format(dfile.name))
            process_defs_file(dfile)

    # Gather all exports to be lifted
    epoints = {}
    if args.exports_to_lift:
        lines = [l.strip() for l in args.exports_to_lift.readlines()]
        epoints = filter_entries(bv, lines)
    elif args.entry_symbol is None:
        epoints = get_all_exports(bv)

    if args.entry_symbol:
        epoints.update(filter_entries(bv, args.entry_symbol))

    if len(epoints) == 0:
        DEBUG("Need to have at least one entry point to lift")
        return

    recover_cfg(bv, epoints, outf)


if __name__ == '__main__':
    main()

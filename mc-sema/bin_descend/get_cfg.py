#!/usr/bin/env python
import binaryninja
import argparse
import os
import sys
import magic
import time
import CFG_pb2

_DEBUG = False


def DEBUG(s):
    if _DEBUG:
        sys.stdout.write('{}\n'.format(str(s)))


def addInst(pbBlock, addr, instBytes):
    # type: (CFG_pb2.Block, int, str) -> CFG_pb2.Instruction
    pbInst = pbBlock.insts.add()
    pbInst.inst_bytes = instBytes
    pbInst.inst_addr = addr
    pbInst.inst_len = len(instBytes)
    # TODO: optional fields

    return pbInst


def addBlock(pbFunc, block):
    # type: (CFG_pb2.Function, binaryninja.LowLevelILBasicBlock) -> CFG_pb2.Block
    pbBlock = pbFunc.blocks.add()
    pbBlock.base_address = block.start
    # TODO: block_follows

    return pbBlock


def recoverFunction(bv, pbMod, pbFunc):
    # type: (binaryninja.BinaryView, CFG_pb2.Module, CFG_pb2.Function) -> None
    func = bv.get_functions_at(pbFunc.entry_address)[0]  # type: binaryninja.Function

    for block in func.basic_blocks:
        pbBlock = addBlock(pbFunc, block)
        idx = block.start
        while idx < block.end:
            instData = bv.read(idx, 16)
            instInfo = bv.arch.get_instruction_info(instData, idx)
            pbInst = addInst(pbBlock, idx, instData[:instInfo.length])
            idx += instInfo.length


def addFunction(pbMod, addr):
    # type: (CFG_pb2.Module, int) -> CFG_pb2.Function
    pbFunc = pbMod.internal_funcs.add()
    pbFunc.entry_address = addr
    return pbFunc


def processEntryPoint(bv, pbMod, name, addr):
    # type: (binaryninja.BinaryView, CFG_pb2.Module, str, int) -> CFG_pb2.Function
    # Create the entry point
    pbEntry = pbMod.entries.add()
    pbEntry.entry_name = name
    pbEntry.entry_address = addr

    # TODO: std_defs extra data

    DEBUG('At EP {}:{:x}'.format(name, addr))

    pbFunc = addFunction(pbMod, addr)
    return pbFunc


def recoverCFG(bv, entries, outf):
    # type: (binaryninja.BinaryView, dict, file) -> None
    pbMod = CFG_pb2.Module()
    pbMod.module_name = bv.file.filename
    DEBUG('PROCESSING: {}'.format(pbMod.module_name))

    # TODO: segment related processing (not in api)

    # Process the main entry points
    for fname, faddr in entries.iteritems():
        DEBUG('Recovering: {}'.format(fname))
        pbFunc = processEntryPoint(bv, pbMod, fname, faddr)
        recoverFunction(bv, pbMod, pbFunc)

    outf.write(pbMod.SerializeToString())
    outf.close()

    DEBUG('Saved to: {}'.format(outf.name))


def filterEntrySymbols(bv, symbols):
    # type: (binaryninja.BinaryView, list) -> dict
    """ Filters out any function symbols that are not in the binary """
    funcSymbols = [func.symbol.name for func in bv.functions]
    filtered = {}
    for symb in symbols:
        if symb in funcSymbols:
            filtered[symb] = bv.symbols[symb].address
        else:
            DEBUG('Could not find symbol "{}" in binary'.format(symb))
    return filtered


def getAllExports(bv):
    # type: (binaryninja.BinaryView) -> dict
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
    magicType = magic.from_file(os.path.join(curpath, filepath))
    if 'ELF' in magicType:
        bvType = binaryninja.BinaryViewType['ELF']
    elif 'PE32' in magicType:
        bvType = binaryninja.BinaryViewType['PE']
    elif 'Mach-O' in magicType:
        bvType = binaryninja.BinaryViewType['Mach-O']
    else:
        bvType = binaryninja.BinaryViewType['Raw']
        # Don't think this can be used for anything, quitting for now
        DEBUG('Unknown binary type: "{}"'.format(magicType))
        return

    # Load and analyze the binary
    bv = bvType.open(filepath)
    bv.update_analysis()
    time.sleep(0.1)  # May need to be changed

    # NOTE: at the moment binja will not load a binary
    # that doesn't have an entry point
    if len(bv) == 0:
        DEBUG("Binary could not be loaded in binja, is it linked?")
        return

    entryPoints = []
    # TODO: exports_to_lift file
    if args.entry_symbol:
        entryPoints = filterEntrySymbols(bv, args.entry_symbol)
    else:
        entryPoints = getAllExports(bv)

    if len(entryPoints) == 0:
        DEBUG("Need to have at least one entry point to lift")
        return

    recoverCFG(bv, entryPoints, outf)


if __name__ == '__main__':
    main()

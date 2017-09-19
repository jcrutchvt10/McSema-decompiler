import binaryninja as binja
from binaryninja.enums import (
    LowLevelILOperation, MediumLevelILOperation, RegisterValueType
)
import logging

import util

log = logging.getLogger(util.LOGNAME)


class JMPTable:
    """ Simple container for jump table info """
    def __init__(self, bv, rel_base, targets, rel_off=0):
        self.rel_off = rel_off
        self.rel_base = rel_base

        # Calculate the absolute base address
        mask = (1 << bv.address_size * 8) - 1
        self.base_addr = (self.rel_base + self.rel_off) & mask

        self.targets = [t & mask for t in targets]


def search_displ_base(il):
    """ Searches for the base address used in a phrase+displacement
    ex: dword [eax * 4 + 0x08040000] -> 0x08040000

    Args:
        il (binja.LowLevelILInstruction): Instruction to parse

    Returns:
        int: base address
    """
    # The il may be inside a LLIL_LOAD
    if il.operation == LowLevelILOperation.LLIL_LOAD:
        return search_displ_base(il.src)

    # Continue left/right at an ADD
    if il.operation == LowLevelILOperation.LLIL_ADD:
        return (search_displ_base(il.left) or
                search_displ_base(il.right))

    # Terminate when constant is found
    if il.operation == LowLevelILOperation.LLIL_CONST:
        return il.constant

    log.debug('Reached end of expr: %s', il)


def search_mlil_displ(il, ptr=False, _neg=False):
    """ Searches for a MLIL_CONST[_PTR] as a child of an ADD or SUB

    Args:
        il (binja.LowLevelILInstruction): Instruction to parse
        ptr (bool): Searches for CONST_PTR instead of CONST if True
        _neg (bool): Used internally to negate the final output if needed

    Returns:
        int: located value
    """
    # The il may be inside a MLIL_LOAD
    if il.operation == MediumLevelILOperation.MLIL_LOAD:
        return search_mlil_displ(il.src, ptr, _neg)

    # Continue left/right for ADD/SUB only
    if il.operation in [MediumLevelILOperation.MLIL_ADD,
                        MediumLevelILOperation.MLIL_SUB]:
        _neg = (il.operation == MediumLevelILOperation.MLIL_SUB)
        return (search_mlil_displ(il.left, ptr, _neg) or
                search_mlil_displ(il.right, ptr, _neg))

    # Terminate when we find a constant
    const_type = MediumLevelILOperation.MLIL_CONST_PTR if ptr else MediumLevelILOperation.MLIL_CONST
    if il.operation == const_type:
        return il.constant * (-1 if _neg else 1)

    log.debug('Reached end of expr: %s', il)


def get_jmptable(bv, il):
    """ Gathers jump table information (if any) being referenced at the given il

    Args:
        bv (binja.BinaryView)
        il (binja.LowLevelILInstruction)

    Returns:
        JMPTable: Jump table info if found, None otherwise
    """
    # Rule out other instructions
    op = il.operation
    if op not in [LowLevelILOperation.LLIL_JUMP_TO, LowLevelILOperation.LLIL_JUMP]:
        return None

    # Ignore any jmps that have an immediate address
    if il.dest.operation in [LowLevelILOperation.LLIL_CONST,
                             LowLevelILOperation.LLIL_CONST_PTR]:
        return None

    # Ignore any jmps that have an immediate dereference (i.e. thunks)
    if il.dest.operation == LowLevelILOperation.LLIL_LOAD and \
       il.dest.src.operation in [LowLevelILOperation.LLIL_CONST,
                                 LowLevelILOperation.LLIL_CONST_PTR]:
        return None

    func = il.function.source_function
    il_func = func.low_level_il

    # Gather all targets of the jump in case binja didn't lift this to LLIL_JUMP_TO
    successors = []
    tgt_table = func.get_low_level_il_at(il.address).dest.possible_values
    if tgt_table.type == RegisterValueType.LookupTableValue:
        successors.extend(tgt_table.mapping.values())

    # Should be able to find table info now
    tbl = None
    log.debug('Searching for jump table info...')

    # Jumping to a register
    if il.dest.operation == LowLevelILOperation.LLIL_REG:
        # This is likely a relative offset table
        # Go up to MLIL and walk back a few instructions to find the values we need
        mlil_func = func.medium_level_il

        # (Roughly) find the MLIL instruction at this jump
        inst_idx = func.get_low_level_il_at(il.address).instr_index
        mlil_idx = il_func.get_medium_level_il_instruction_index(inst_idx)

        # Find a MLIL_LOAD with the address/offset we need
        while mlil_idx > 0:
            mlil = mlil_func[mlil_idx]
            if mlil.operation == MediumLevelILOperation.MLIL_SET_VAR and \
               mlil.src.operation == MediumLevelILOperation.MLIL_LOAD:
                # Possible jump table info here, try parsing it
                base = search_mlil_displ(mlil.src, ptr=True)
                offset = search_mlil_displ(mlil.src)

                # If it worked return the table info
                if None not in [base, offset]:
                    tbl = JMPTable(bv, base, successors, offset)
                    break

            # Keep walking back
            mlil_idx -= 1

    # Full jump expression
    else:
        # Parse out the base address
        base = search_displ_base(il.dest)
        if base is not None:
            tbl = JMPTable(bv, base, successors)

    if tbl is not None:
        log.debug('JumpTable @ 0x%x, Offset 0x%x', tbl.base_addr, tbl.rel_off)
    return tbl

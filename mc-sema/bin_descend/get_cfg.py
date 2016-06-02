#!/usr/bin/env python
import binaryninja
import argparse
import os
import sys
import magic
import time

_DEBUG = False


def DEBUG(s):
    if _DEBUG:
        sys.stdout.write('{}\n'.format(str(s)))


def recoverCFG(bv, entries, outf):
    # type: (binaryninja.BinaryView, list, file) -> None
    pass


def filterEntrySymbols(bv, symbols):
    # type: (binaryninja.BinaryView, list) -> list
    """ Filters out any function symbols that are not in the binary """
    funcSymbols = [func.symbol.name for func in bv.functions]
    filtered = set()
    for symb in symbols:
        if symb in funcSymbols:
            filtered.add(symb)
        else:
            DEBUG('Could not find symbol "{}" in binary'.format(symb))
    return list(filtered)


def getAllExports(bv):
    # type: (binaryninja.BinaryView) -> list
    # TODO: Find all exports
    return [bv.entry_function.symbol.name]



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

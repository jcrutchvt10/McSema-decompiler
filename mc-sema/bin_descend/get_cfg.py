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
        sys.stdout.write(str(s))


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

if __name__ == '__main__':
    main()

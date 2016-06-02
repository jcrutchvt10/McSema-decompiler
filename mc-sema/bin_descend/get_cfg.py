#!/usr/bin/env python

import binaryninja
import argparse
import sys


def main():
    parser = argparse.ArgumentParser()

    parser.add_argument('--entry-symbol', nargs='*',
                        help='Symbols(s) to start disassembling from')

    parser.add_argument('-o', '--output',
                        type=argparse.FileType('wb'),
                        default=None,
                        help='The output control flow graph recovered from this file')

    parser.add_argument('-d', '--debug', action='store_true',
                        help='Enable verbose debugging mode')

    parser.add_argument('file', help='Binary to recover control flow graph from')

    args = parser.parse_args(sys.argv[1:])


if __name__ == '__main__':
    main()

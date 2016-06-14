#!/bin/bash

source env.sh

rm -f demo_test1.cfg demo_driver1.o demo_test1.o demo_test1_mine.o demo_driver1.exe

#nasm -f elf32 -o demo_test1.o demo_test1.asm 
${CC} -ggdb -m32 -o demo_test1.o demo_test1.c

#Check if binja is available
python -c 'import binaryninja' 2>>/dev/null
if [ $? == 0 ]
then
    echo "Using Binary Ninja to recover CFG"
    ../bin_descend/get_cfg.py -d demo_test1.o -o demo_test1.cfg --entry-symbol demo1
elif [ -e "${IDA_PATH}/idaq" ]
then
    echo "Using IDA to recover CFG"
    ${BIN_DESCEND_PATH}/bin_descend_wrapper.py -march=x86 -d -entry-symbol=demo1 -i=demo_test1.o >> /dev/null
else
    echo "Using bin_descend to recover CFG"
    ${BIN_DESCEND_PATH}/bin_descend -march=x86 -d -entry-symbol=demo1 -i=demo_test1.o
fi

${CFG_TO_BC_PATH}/cfg_to_bc -mtriple=i686-pc-linux-gnu -i demo_test1.cfg -driver=demo1_entry,demo1,raw,return,C -o demo_test1.bc

${LLVM_PATH}/opt -O3 -o demo_test1_opt.bc demo_test1.bc
${LLVM_PATH}/llc --filetype=obj -o demo_test1_mine.o demo_test1_opt.bc
${CC} -m32 -o demo_driver1.exe demo_driver1.c demo_test1_mine.o
./demo_driver1.exe

#!/bin/bash

source env.sh

rm -f demo_test3.cfg demo_driver3.o demo_test3.o demo_test3_mine.o demo_driver3.exe

${CC} -ggdb -m32 -o demo_test3.o demo_test3.c

#Check if binja is available
python -c 'import binaryninja' 2>>/dev/null
if [ $? == 0 ]
then
    echo "Using Binary Ninja to recover CFG"
    ../bin_descend/get_cfg.py -d demo_test3.o -o demo_test3.cfg --entry-symbol demo3
elif [ -e "${IDA_PATH}/idaq" ]
then
    echo "Using IDA to recover CFG"
    ${BIN_DESCEND_PATH}/bin_descend_wrapper.py -march=x86 -d -entry-symbol=demo3 -i=demo_test3.o>> /dev/null
else
    echo "Using bin_descend to recover CFG"
    ${BIN_DESCEND_PATH}/bin_descend -march=x86 -d -entry-symbol=demo3 -i=demo_test3.o
fi

${CFG_TO_BC_PATH}/cfg_to_bc -mtriple=i686-pc-linux-gnu -i demo_test3.cfg -driver=demo3_entry,demo3,2,return,C -o demo_test3.bc

${LLVM_PATH}/opt -O3 -o demo_test3_opt.bc demo_test3.bc
${LLVM_PATH}/llc -filetype=obj -o demo_test3_mine.o demo_test3_opt.bc
${CC} -ggdb -m32 -o demo_driver3.exe demo_driver3.c demo_test3_mine.o
./demo_driver3.exe

#!/bin/bash

source env.sh

rm -f demo_test14.cfg demo_driver14.o demo_test14.o demo_test14_mine.o demo_driver14.exe

${CC} -ggdb -m32 -o demo_test14.o demo_test14.c

#Check if binja is available
python -c 'import binaryninja' 2>>/dev/null
if [ $? == 0 ]
then
    echo "Using Binary Ninja to recover CFG"
    ../bin_descend/get_cfg.py -d demo_test14.o -o demo_test14.cfg -s demo14_map.txt --entry-symbol printMessages
elif [ -e "${IDA_PATH}/idaq" ]
then
    echo "Using IDA to recover CFG"
    ${BIN_DESCEND_PATH}/bin_descend_wrapper.py -march=x86 -func-map="demo14_map.txt" -entry-symbol=printMessages -i=demo_test14.o >> /dev/null
else
    echo "Using bin_descend to recover CFG"
    ${BIN_DESCEND_PATH}/bin_descend -d -march=x86 -func-map="demo14_map.txt" -entry-symbol=printMessages -i=demo_test14.o
fi

${CFG_TO_BC_PATH}/cfg_to_bc -mtriple=i686-pc-linux-gnu -i demo_test14.cfg -driver=demo14_entry,printMessages,0,return,C -o demo_test14.bc

${LLVM_PATH}/opt -O3 -o demo_test14_opt.bc demo_test14.bc
${LLVM_PATH}/llc -filetype=obj -o demo_test14_mine.o demo_test14_opt.bc
${CC} -ggdb -m32 -o demo_driver14.exe demo_driver14.c demo_test14_mine.o
./demo_driver14.exe

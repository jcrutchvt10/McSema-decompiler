#!/bin/bash

function pause() {
    read -p "$1"
}

for i in {1..16} _sailboat #_fpu1 _maze
do
    ./demo${i}.sh
    python -c "print('=' * 50)"
    pause 'Press enter to continue...'
done

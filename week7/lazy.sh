# !/bin/bash

for (( i=1 ; i<=4; i++ ))
do
    mkdir day$i
    cd day$i
    for (( j=($i-1)*6 + 1; j<=$i*6 ; j++ ))
    do
        touch DP_$j.cpp
    done
    cd ..
done

















#..
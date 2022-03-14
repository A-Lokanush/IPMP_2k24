#!/bin/bash

for (( i = 2; i <= 4; i++ ))
do
   mkdir day$i
   cd day$i
   for (( j = ($i-1)*18 + 1 ; j <= $i*18 ; j++ ))
   do
       touch Trees_$j.cpp
   done
   cd ..
done

echo "Howdy Ho, Completed Mhan..."
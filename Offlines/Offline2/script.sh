#!/usr/bin/bash

flex -o 2205014.cpp 2205014.l
g++ 2205014.cpp -o 2205014
./2205014 test.txt 
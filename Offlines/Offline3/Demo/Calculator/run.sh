#!/usr/bin/bash
g++ -std=c++17 -I/usr/local/include/antlr4-runtime -L/usr/local/lib -pthread *.cpp -lantlr4-runtime
LD_LIBRARY_PATH=/usr/local/lib ./a.out input.txt

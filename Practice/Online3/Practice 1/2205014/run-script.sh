#!/bin/bash

# intialization set up
# create virtual environment
# python3 -m venv .venv
# activate virtual environment
# source .venv/bin/activate
# antlr4-runtime.h path : /usr/local/include/antlr4-runtime
# install antlr4-tools
# pip install antlr4-tools
# antlr4 -v 4.13.2
antlr4 -v 4.13.2 -Dlanguage=Cpp -visitor -no-listener CSubset_2205014.g4
g++ -std=c++17 -w -I/usr/local/include/antlr4-runtime *.cpp -L/usr/local/lib/ -lantlr4-runtime -pthread -o compiler.out
LD_LIBRARY_PATH=/usr/local/lib ./compiler.out $1

#!/bin/bash

# 1. Check if exactly 2 arguments are provided
if [ "$#" -ne 2 ]; then
    echo "Error: Incorrect number of arguments."
    echo "Usage: ./2205014_build.sh <argument1> <argument2>"
    exit 1
fi

# Store arguments in descriptive variables
ARG1=$1
ARG2=$2

# 2. Compile the C++ project
echo "Compiling project..."
g++ -fsanitize=address -g 2205014.cpp -o 2205014

# Check if compilation was successful
if [ $? -eq 0 ]; then
    echo "Compilation successful!"
    echo "-----------------------------------"
    echo "Running program with arguments: $ARG1 $ARG2"
    echo "-----------------------------------"
    # 3. Execute the program with the arguments
    ./2205014 "$ARG1" "$ARG2"
else
    echo "Compilation failed."
    exit 1
fi

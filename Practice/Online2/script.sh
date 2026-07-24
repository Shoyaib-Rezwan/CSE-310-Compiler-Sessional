#!/usr/bin/bash

flex -o 2205014.cpp 2205014.l
g++ -fsanitize=address -g 2205014.cpp -o 2205014
./2205014 "Test IO-20260718/input1.txt"
diff "Test IO-20260718/input1_token.txt" 2205014_token.txt
diff "Test IO-20260718/input1_log.txt" 2205014_log.txt
./2205014 "Test IO-20260718/input2.txt"
diff "Test IO-20260718/input2_token.txt" 2205014_token.txt
diff "Test IO-20260718/input2_log.txt" 2205014_log.txt
./2205014 "Test IO-20260718/input3.txt"
diff "Test IO-20260718/input3_token.txt" 2205014_token.txt
diff "Test IO-20260718/input3_log.txt" 2205014_log.txt

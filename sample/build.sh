#!/bin/bash
rm -f demo.out
gcc main.c ../src/rand.c -I../src/ -Wall -g -O0 -o demo.out
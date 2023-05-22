#!/bin/bash
gcc -FPIC -c *.c
gcc -shared -Wl,-soname,liball.so -o liball.so *.o

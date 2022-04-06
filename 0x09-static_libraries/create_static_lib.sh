#!/bin/bash
gcc *.c
ar rcs liball.a *.o
ranlib liball.a

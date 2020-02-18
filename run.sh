#! /bin/bash
gcc -lm CHECK.c gauss_lobatto_points.c
./a.out > out.dat
./prof.plt
ps2pdf14 output.ps

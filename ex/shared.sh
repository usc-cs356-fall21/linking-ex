#!/bin/sh
cd lib
rm -f *.o *.a
gcc -c -fpic f1a.c f2.c
#gcc -c -fpic f2.c
gcc -shared f1a.o f2.o -o libf.so 
ls
cd ../app1
gcc -I../include -L../lib app1.c -lf
./a.out       # loader can't find libf.so
# set search path for libraries
export LD_LIBRARY_PATH=../lib:$LD_LIBRARY_PATH
./a.out       # should see '11' output
cd ../lib
rm libf.so
gcc -c -fpic f1b.c
gcc -I../include -shared f1b.o f2.o -o libf.so 
cd ../app1
./a.out       # should se '1111' output
              # without recompile/relink
cd ..

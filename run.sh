#!/bin/bash

rm -fr build.clang
rm -fr build.gcc

mkdir -p build.clang && cd build.clang && \
    cmake .. -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ && make

cd ..

mkdir -p build.gcc && cd build.gcc && \
    cmake .. -DCMAKE_C_COMPILER=gcc -DCMAKE_CXX_COMPILER=g++ && make
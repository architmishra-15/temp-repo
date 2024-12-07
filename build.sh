#!/bin/bash

set -e

# Compiler and Paths
CXX=clang++
LLVMLIBDIR=C:/msys64/mingw64/lib
LLVMINCDIR=C:/msys64/mingw64/include
LLVMCONFIG=llvm-config

# Compilation Flags
CFLAGS="-std=c++17 -Wall -Wextra -I$LLVMINCDIR -I./include -O2"
LDFLAGS="-L$LLVMLIBDIR -lLLVM"

# Source and Object Files
SRC="main.cpp ./src/lexer.cpp ./src/parser.cpp ./src/codegen.cpp ./src/ast.cpp ./src/gc.cpp"
OBJ=$(echo $SRC | sed -e "s|.cpp|.o|g" -e "s|./src|./build|g" -e "s|main.cpp|./build/main.o|g")

# Build Output
BUILD_DIR="./build"
BIN_NAME="customl"

# Create Build Directory
echo "Creating $BUILD_DIR directory..."
mkdir -p "$BUILD_DIR"

# Compile Sources
echo "Compiling sources..."
for src in $SRC; do
    objfile="$BUILD_DIR/$(basename $src .cpp).o"
    echo "Compiling $src -> $objfile"
    $CXX $CFLAGS -c $src -o $objfile
done

# Link Object Files
echo "Linking object files..."
$CXX $OBJ $LDFLAGS -o $BIN_NAME

# Completion Message
echo "Build complete. Output binary: $BIN_NAME"

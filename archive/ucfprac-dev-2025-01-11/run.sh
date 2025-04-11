#!/bin/bash

# Ensure two arguments are provided
if [ $# -ne 2 ]; then
  echo "Usage: $0 <source_file.cpp> <input_file.in>"
  exit 1
fi

# Arguments
SOURCE_FILE=$1
INPUT_FILE=$2

# Compile the C++ source file
g++ "$SOURCE_FILE" -o out

# Check if the compilation was successful
if [ $? -eq 0 ]; then
  # Capture the output of the program
  OUTPUT=$(./out < "$INPUT_FILE")

  # Print the captured output
  echo "$OUTPUT"
else
  echo "Compilation failed."
  exit 1
fi

#!/usr/bin/env python3

import os
import sys

def remove_files(NAME):
    for file_name in os.listdir('.'):
        if file_name.startswith(NAME):
            file_path = os.path.join('.', file_name)
            os.remove(file_path)
            print(f"Removed file: {file_path}")

    cph_dir = '.cph'
    if os.path.isdir(cph_dir):
        for file_name in os.listdir(cph_dir):
            if file_name.startswith(f".{NAME}"):
                file_path = os.path.join(cph_dir, file_name)
                os.remove(file_path)
                print(f"Removed file: {file_path}")

def main():
    if len(sys.argv) != 2:
        print("Usage: python3 remove.py NAME")
        sys.exit(1)

    NAME = sys.argv[1]

    remove_files(NAME)

if __name__ == "__main__":
    main()

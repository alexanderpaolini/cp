#!/usr/bin/env python3

import os
import shutil
import sys

CURRENT_DIR = os.path.dirname(os.path.abspath(__file__))
MAIN_DIR = os.path.join(CURRENT_DIR, '..')
CPH_DIR = os.path.join(MAIN_DIR, '.cph')
ARCHIVE_FOLDER = os.path.join(MAIN_DIR, 'archive')

def unclean(FOLDER_NAME, FILE_NAME):
    target_folder = os.path.join(ARCHIVE_FOLDER, FOLDER_NAME)
    if not os.path.isdir(target_folder):
        print(f"Error: Folder '{FOLDER_NAME}' does not exist in the archive.")
        return

    cpp_file_path = os.path.join(target_folder, FILE_NAME + '.cpp')
    print(cpp_file_path)
    if not os.path.isfile(cpp_file_path):
        print(f"Error: File '{FILE_NAME}' not found in folder '{FOLDER_NAME}'.")
        return

    shutil.move(cpp_file_path, MAIN_DIR)
    print(f"Moved '{cpp_file_path}' back to '{MAIN_DIR}'.")

    base_name = os.path.basename(FILE_NAME).replace(".cpp", "")
    target_cph_folder = os.path.join(target_folder, '.cph')

    cph_file = None
    if os.path.isdir(target_cph_folder):
        for file in os.listdir(target_cph_folder):
            if file.startswith(f".{base_name}"):
                cph_file = os.path.join(target_cph_folder, file)
                break
            
    if cph_file and os.path.isfile(cph_file):
        shutil.move(cph_file, CPH_DIR)
        print(f"Moved related file '{cph_file}' back to '{CPH_DIR}'.")
    else:
        print(f"No related .cph file found for '{base_name}'.")

def main():
    if len(sys.argv) != 3:
        print("Usage: python3 ./utils/unarchive.py FOLDER_NAME FILE_NAME")
        sys.exit(1)

    FOLDER_NAME = sys.argv[1]
    FILE_NAME = sys.argv[2]

    unclean(FOLDER_NAME, FILE_NAME)

if __name__ == "__main__":
    main()

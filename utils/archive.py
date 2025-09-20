#!/usr/bin/env python3

import os
import shutil

CURRENT_DIR = os.path.dirname(os.path.abspath(__file__))
ARCHIVE_FOLDER = os.path.join(CURRENT_DIR, '..', 'archive')

def move_files(file_path):
    folders = [
        entry for entry in os.listdir(ARCHIVE_FOLDER) 
        if os.path.isdir(os.path.join(ARCHIVE_FOLDER, entry))
    ]
    
    base_name = os.path.basename(file_path).replace(".cpp", "")
    print("--------------------------------------------------")
    print(f"Which folder would you like to move '{file_path}' to?")
    print("0 - ignore")

    for i, folder in enumerate(folders):
        print(f"{i + 1} - {folder}")
    print("n - new folder")

    try:
        choice = input("--> ")
        if choice == "n":
            folder_name = input("Enter folder name: ")
            new_folder_path = os.path.join(ARCHIVE_FOLDER, folder_name)
            os.mkdir(new_folder_path)
            folders.append(folder_name)
            choice = len(folders)  # New folder will be the last in the list
        else:
            choice = int(choice)
    except ValueError:
        print("Invalid input, skipping file.")
        return

    if 0 <= choice <= len(folders):
        if choice == 0:
            print("Skipping file.")
            return
        else:
            selected_folder = folders[choice - 1]
            target_folder = os.path.join(ARCHIVE_FOLDER, selected_folder)
            target_cph_folder = os.path.join(target_folder, '.cph')
    else:
        print("Invalid choice, skipping file.")
        return

    os.makedirs(target_folder, exist_ok=True)
    os.makedirs(target_cph_folder, exist_ok=True)

    shutil.move(file_path, target_folder)

    cph_file = None
    for root, dirs, files in os.walk(".cph"):
        for file in files:
            if file.startswith(f".{base_name}"):
                cph_file = os.path.join(root, file)
                break
        if cph_file:
            break

    if cph_file and os.path.isfile(cph_file):
        shutil.move(cph_file, target_cph_folder)
        print(f"Moved related file '{cph_file}' to '{target_folder}'.")
    else:
        print(f"No related .cph file found for '{base_name}'.")

    print(f"Moved '{file_path}' to '{target_folder}'.")

def main():
    for file_name in os.listdir("."):
        if file_name.endswith(".cpp") or file_name.endswith(".py"):
            move_files(file_name)

    for file_name in os.listdir("."):
        if file_name.endswith(".bin"):
            os.remove(file_name)

if __name__ == "__main__":
    main()

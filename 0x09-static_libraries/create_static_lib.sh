#!/bin/bash

# Ibrahim Hanafi's Bash Script for Compiling Source Files to Object Files

# Store the list of source file names in the current directory in an array
source_files=($(ls -Ap | grep -E '\.c$' | awk '{print $1}'))

# Loop through the array and compile each source file into an object file
for source_file in "${source_files[@]}"; do
    # Extract the filename without extension
    filename_without_extension="${source_file%.*}"

    # Compile the source file into an object file with a unique name
    gcc -c "$source_file" -o "${filename_without_extension}.o"
done

file_names=($(ls -Ap | grep -v / | awk '/\.o$/ {print $1}'))

# Create an empty archive file named "my_archive.a"
ar rcs my_archive.a "${file_names[@]}"

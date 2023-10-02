#!/bin/bash

# Ibrahim Hanafi's Bash Script for Printing File Names with .o Extension

# Store the list of file names in the current directory in an array
file_names=($(ls -Ap | grep -v / | awk '{print $1}'))

# Create or clear the "names.txt" file
> "names.txt"

# Loop through the array and append filenames with .o extension to "names.txt"
for file in "${file_names[@]}"; do
    # Check if the file has a .o extension
    if [[ "$file" == *.o ]]; then
        echo "$file" >> "names.txt"
    fi
done

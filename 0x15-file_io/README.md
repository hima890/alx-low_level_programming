# File I/O and File Copying Programs

This repository contains a set of C programs related to file I/O and file copying. Each program serves a specific purpose and has its own usage instructions.

## Table of Contents

1. [read_textfile](#1-read_textfile)
2. [create_file](#2-create_file)
3. [append_text_to_file](#3-append_text_to_file)
4. [cp](#4-cp)
5. [elf_header](#5-elf_header)

## 1. read_textfile

### Description

This program reads a text file and prints its content to the POSIX standard output.

### Usage

```shell
./read_textfile filename letters
```

- `filename` is the name of the text file to be read.
- `letters` is the number of letters to read and print.

### Returns

The program returns the actual number of letters it could read and print. If the file cannot be opened, read, or if `filename` is NULL, it returns 0.

## 2. create_file

### Description

This program creates a file with specified text content.

### Usage

```shell
./create_file filename text_content
```

- `filename` is the name of the file to be created.
- `text_content` is a NULL-terminated string to write to the file.

### Returns

The program returns 1 on success and -1 on failure. The created file has permissions `rw-------`. If the file already exists, it does not change the permissions.

## 3. append_text_to_file

### Description

This program appends text to the end of an existing file.

### Usage

```shell
./append_text_to_file filename text_content
```

- `filename` is the name of the file to which text should be appended.
- `text_content` is the NULL-terminated string to add at the end of the file.

### Returns

The program returns 1 on success and -1 on failure. If the file does not exist, it does not create a new file. If `filename` is NULL or `text_content` is NULL, it does not add anything to the file.

## 4. cp

### Description

This program copies the content of one file to another file.

### Usage

```shell
./cp file_from file_to
```

- `file_from` is the source file to copy content from.
- `file_to` is the destination file where content will be copied. If it already exists, it gets truncated.

### Returns

The program returns 0 if executed successfully. It exits with different status codes and displays error messages if any issues occur during file operations.

## 5. elf_header

### Description

This program displays the information contained in the ELF header at the start of an ELF file.

### Usage

```shell
./elf_header elf_filename
```

- `elf_filename` is the name of the ELF file to analyze.

### Returns

The program displays detailed information about the ELF header, and in case of errors, it exits with a status code of 98 and provides comprehensive error messages to stderr.
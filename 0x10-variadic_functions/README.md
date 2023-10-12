# Variadic Functions

This repository contains C programs that demonstrate the use of variadic functions, which are functions that can accept a variable number of arguments. Variadic functions are particularly useful when you need to work with a different number of arguments based on the context.

## Files Description

1. **0-sum_them_all.c**

   - Prototype: `int sum_them_all(const unsigned int n, ...)`
   - This function returns the sum of all its parameters.
   - If `n` is 0, it returns 0.

2. **1-print_numbers.c**

   - Prototype: `void print_numbers(const char *separator, const unsigned int n, ...)`
   - This function prints numbers followed by a new line.
   - It takes a `separator` string to be printed between numbers.
   - If `separator` is `NULL`, it doesn't print it.
   - A new line is printed at the end of the function.

3. **2-print_strings.c**

   - Prototype: `void print_strings(const char *separator, const unsigned int n, ...)`
   - This function prints strings followed by a new line.
   - It takes a `separator` string to be printed between the strings.
   - If `separator` is `NULL`, it doesn't print it.
   - If one of the strings is `NULL`, it prints "(nil)" instead.
   - A new line is printed at the end of the function.

4. **3-print_all.c**

   - Prototype: `void print_all(const char * const format, ...)`
   - This function prints a variable number of arguments based on a format string.
   - The format string specifies the types of arguments that follow and how to print them.
   - Supported format specifiers:
     - `c`: char
     - `i`: integer
     - `f`: float
     - `s`: char* (if the string is `NULL`, it prints "(nil)")
   - Any other character in the format string is ignored.
   - A new line is printed at the end of the function.

## Compilation and Examples

You can compile each program separately, as shown in the examples provided in the source code files. The compilation may vary depending on your specific environment. For example:

```shell
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o a
./a
```

## Usage

Each program is designed to showcase the usage of variadic functions in different contexts. Run the programs with specific arguments or without, as demonstrated in the source code files.

## Error Handling

Each program includes error handling to ensure that the functions handle various scenarios correctly.

## Note

Variadic functions offer flexibility and can be used in a wide range of scenarios where the number of arguments may change.
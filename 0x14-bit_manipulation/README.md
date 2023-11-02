# Bit Manipulation and Endianness

This repository contains C programs that focus on bit manipulation and checking endianness in a computer's memory architecture.

## 0-binary_to_uint

This program converts a binary number to an unsigned integer.

- Prototype: `unsigned int binary_to_uint(const char *b);`
- The `b` argument is a string consisting of 0 and 1 characters.
- Returns the converted number or 0 if there are non-binary characters in the string or if `b` is `NULL`.

## 1-print_binary

This program prints the binary representation of a given number.

- Prototype: `void print_binary(unsigned long int n);`
- The program does not use arrays, malloc, or % or / operators.

## 2-get_bit

This program retrieves the value of a bit at a given index.

- Prototype: `int get_bit(unsigned long int n, unsigned int index);`
- The `index` argument represents the bit index, starting from 0.
- Returns the value of the bit at the specified index or -1 if an error occurs.

## 3-set_bit

This program sets the value of a bit to 1 at a given index.

- Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
- The `index` argument represents the bit index, starting from 0.
- Returns 1 if it successfully sets the bit to 1, or -1 if an error occurs.

## 4-clear_bit

This program clears the value of a bit to 0 at a given index.

- Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`
- The `index` argument represents the bit index, starting from 0.
- Returns 1 if it successfully sets the bit to 0, or -1 if an error occurs.

## 5-flip_bits

This program calculates the number of bits that need to be flipped to get from one number to another.

- Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
- It does not use the % or / operators.

## 100-get_endianness

This program checks the endianness of the computer.

- Prototype: `int get_endianness(void);`
- Returns 0 if the computer is big-endian and 1 if it's little-endian.

### How to Compile and Run

To compile and run these programs, follow the instructions in the respective directories. Typically, you can use `gcc` to compile the programs and then execute the compiled binaries.

For example, to compile and run the `0-binary_to_uint` program, you can use:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o binary_to_uint
./binary_to_uint

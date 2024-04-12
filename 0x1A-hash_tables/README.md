# Sorted Hash Table Implementation

This project implements a sorted hash table in C, following the specifications provided in the assignment. The sorted hash table is designed to handle collisions using chaining and maintains a sorted linked list by key for efficient traversal and printing.

## Files

1. **shash_table_create.c**: Contains the implementation of the function `shash_table_create` to create a sorted hash table.
2. **shash_table_set.c**: Implements the function `shash_table_set` to add an element to the sorted hash table.
3. **shash_table_get.c**: Implements the function `shash_table_get` to retrieve a value associated with a key from the sorted hash table.
4. **shash_table_print.c**: Implements the function `shash_table_print` to print the sorted hash table in ascending order by key.
5. **shash_table_print_rev.c**: Implements the function `shash_table_print_rev` to print the sorted hash table in descending order by key.
6. **shash_table_delete.c**: Implements the function `shash_table_delete` to delete the sorted hash table and free allocated memory.

Additionally, the following files are included:

- **hash_tables.h**: Header file containing function prototypes and structure definitions for the sorted hash table.
- **1-djb2.c**: Implementation of the DJB2 hash function.
- **2-key_index.c**: Function to compute the index of a key in the hash table array.

## Compilation

To compile the project, use the provided `gcc` command with the appropriate flags:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 100-main.c shash_table_create.c shash_table_set.c shash_table_get.c shash_table_print.c shash_table_print_rev.c shash_table_delete.c 1-djb2.c 2-key_index.c -o sorted_hash_table
```

## Usage

After compilation, execute the generated binary `sorted_hash_table` to run the test cases provided in `100-main.c`. The output will demonstrate the functionality of the sorted hash table, including insertion, retrieval, and printing in both ascending and descending order.

## Author

This implementation was created by Ibrahim Hanafi.
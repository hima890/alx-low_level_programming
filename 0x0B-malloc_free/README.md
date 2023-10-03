# Memory Allocation and Freeing Functions

This project consists of C functions for memory allocation and freeing operations. These functions enable dynamic memory management for various tasks without requiring fixed memory sizes. Below is an overview of each function:

## 0. Float like a butterfly, sting like a bee

```c
char *create_array(unsigned int size, char c);
```

This function creates an array of characters with a specified size and initializes all elements to a given character.

- Parameters:
  - `size`: The size of the array.
  - `c`: The character used for initialization.
- Returns:
  - A pointer to the newly created array.
  - `NULL` if `size` is `0`.

## 1. The woman who has no imagination has no wings

```c
char *_strdup(char *str);
```

This function duplicates a string and returns a pointer to the duplicated string.

- Parameter:
  - `str`: The string to duplicate.
- Returns:
  - A pointer to the duplicated string.
  - `NULL` if `str` is `NULL` or if memory allocation fails.

## 2. He who is not courageous enough to take risks will accomplish nothing in life

```c
char *str_concat(char *s1, char *s2);
```

This function concatenates two strings and returns a newly allocated string containing the result.

- Parameters:
  - `s1`: The first string.
  - `s2`: The second string.
- Returns:
  - A pointer to the concatenated string.
  - `NULL` on failure.

## 3. If you even dream of beating me, you'd better wake up and apologize

```c
int **alloc_grid(int width, int height);
```

This function allocates memory for a 2D array of integers and initializes all elements to `0`.

- Parameters:
  - `width`: The width of the 2D array.
  - `height`: The height of the 2D array.
- Returns:
  - A pointer to the allocated 2D array.
  - `NULL` on failure or if `width` or `height` is `0` or negative.

## 4. It's not bragging if you can back it up

```c
void free_grid(int **grid, int height);
```

This function frees the memory allocated for a 2D array of integers created using the `alloc_grid` function.

- Parameters:
  - `grid`: A pointer to the 2D array.
  - `height`: The height of the 2D array.

These functions facilitate dynamic memory allocation and deallocation, providing flexibility when working with memory in C programs. Be sure to check for `NULL` pointers after calling these functions to handle potential memory allocation failures gracefully.
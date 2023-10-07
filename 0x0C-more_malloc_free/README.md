### Task 0: `malloc_checked`
- Prototype: `void *malloc_checked(unsigned int b);`
- Description: Allocates memory using `malloc`. If `malloc` fails, it causes normal process termination with a status value of 98.

### Task 1: `string_nconcat`
- Prototype: `char *string_nconcat(char *s1, char *s2, unsigned int n);`
- Description: Concatenates two strings and returns a pointer to the newly allocated space in memory. It includes `s1`, followed by the first `n` bytes of `s2`, and is null-terminated. If the function fails, it returns `NULL`.

### Task 2: `_calloc`
- Prototype: `void *_calloc(unsigned int nmemb, unsigned int size);`
- Description: Allocates memory for an array using `malloc`. The memory is initialized to zero. If either `nmemb` or `size` is 0, it returns `NULL`. If `malloc` fails, it returns `NULL`.

### Task 3: `array_range`
- Prototype: `int *array_range(int min, int max);`
- Description: Creates an array of integers containing values from `min` to `max`, inclusive. The values are ordered from `min` to `max`. It returns a pointer to the newly created array. If `min` is greater than `max`, it returns `NULL`. If `malloc` fails, it returns `NULL`.

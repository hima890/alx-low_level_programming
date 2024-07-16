# Search Algorithms

This project implements various search algorithms in C. The algorithms include linear search, binary search, jump search, interpolation search, exponential search, and search in skip lists.

## Data Structures

### Singly Linked List

```c
/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;
```

### Skip List

```c
/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;
```

## Tasks

### Task 0: Linear Search

Write a function that searches for a value in an array of integers using the Linear search algorithm.

- Prototype: `int linear_search(int *array, size_t size, int value);`

### Task 1: Binary Search

Write a function that searches for a value in a sorted array of integers using the Binary search algorithm.

- Prototype: `int binary_search(int *array, size_t size, int value);`

### Task 2: Jump Search

Write a function that searches for a value in a sorted array of integers using the Jump search algorithm.

- Prototype: `int jump_search(int *array, size_t size, int value);`

### Task 3: Interpolation Search

Write a function that searches for a value in a sorted array of integers using the Interpolation search algorithm.

- Prototype: `int interpolation_search(int *array, size_t size, int value);`

### Task 4: Exponential Search

Write a function that searches for a value in a sorted array of integers using the Exponential search algorithm.

- Prototype: `int exponential_search(int *array, size_t size, int value);`

### Task 5: Advanced Binary Search

Write a function that searches for a value in a sorted array of integers. This function must return the index of the first occurrence of the value in the array.

- Prototype: `int advanced_binary(int *array, size_t size, int value);`

### Task 6: Jump Search in Singly Linked List

Write a function that searches for a value in a sorted singly linked list of integers using the Jump search algorithm.

- Prototype: `listint_t *jump_list(listint_t *list, size_t size, int value);`

### Task 7: Linear Search in Skip List

Write a function that searches for a value in a sorted skip list of integers using the Linear search algorithm with express lane.

- Prototype: `skiplist_t *linear_skip(skiplist_t *list, int value);`

## Compilation

To compile all the tasks, use the following command:

```sh
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o search_algos -lm
```

## Usage

### Example for Task 0: Linear Search

```c
#include <stdio.h>
#include "search_algos.h"

int main(void)
{
    int array[] = {10, 20, 30, 40, 50};
    size_t size = sizeof(array) / sizeof(array[0]);

    int index = linear_search(array, size, 30);
    printf("Found at index: %d\n", index);

    return 0;
}
```

### Example for Task 6: Jump Search in Singly Linked List

```c
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/* Define listint_t, create_list, and print_list as per your implementation */

int main(void)
{
    listint_t *list, *res;
    int array[] = {0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 53, 61, 62, 76, 99};
    size_t size = sizeof(array) / sizeof(array[0]);

    list = create_list(array, size);
    print_list(list);

    res = jump_list(list, size, 53);
    printf("Found %d at index: %lu\n\n", 53, res->index);

    res = jump_list(list, size, 2);
    printf("Found %d at index: %lu\n\n", 2, res->index);

    res = jump_list(list, size, 999);
    printf("Found %d at index: %p\n", 999, (void *) res);

    free_list(list);
    return (EXIT_SUCCESS);
}
```

## Author

Developed by Ibrahim Hanafi.
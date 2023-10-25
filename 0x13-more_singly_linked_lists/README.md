# Singly Linked List Functions

This repository contains a collection of C functions for working with singly linked lists. The functions are part of the ALX Low-Level Programming curriculum and are designed to manipulate and perform operations on singly linked lists. These functions can be used to create, modify, and manage linked lists in a C program.

## Function Descriptions

### 0-print_listint.c

- Function: `print_listint`
- Description: This function prints all the elements of a `listint_t` list and returns the number of nodes in the list.
- Prototype: `size_t print_listint(const listint_t *h)`
- Usage: `size_t n = print_listint(head);`

### 1-listint_len.c

- Function: `listint_len`
- Description: This function returns the number of elements in a `listint_t` list.
- Prototype: `size_t listint_len(const listint_t *h)`
- Usage: `size_t n = listint_len(head);`

### 2-add_nodeint.c

- Function: `add_nodeint`
- Description: This function adds a new node at the beginning of a `listint_t` list and returns the address of the new element.
- Prototype: `listint_t *add_nodeint(listint_t **head, const int n)`
- Usage: `listint_t *new_node = add_nodeint(&head, 42);`

### 3-add_nodeint_end.c

- Function: `add_nodeint_end`
- Description: This function adds a new node at the end of a `listint_t` list and returns the address of the new element.
- Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n)`
- Usage: `listint_t *new_node = add_nodeint_end(&head, 100);`

### 4-free_listint.c

- Function: `free_listint`
- Description: This function frees a `listint_t` list.
- Prototype: `void free_listint(listint_t *head)`
- Usage: `free_listint(head);`

### 5-free_listint2.c

- Function: `free_listint2`
- Description: This function frees a `listint_t` list and sets the head to NULL.
- Prototype: `void free_listint2(listint_t **head)`
- Usage: `free_listint2(&head);`

### 6-pop_listint.c

- Function: `pop_listint`
- Description: This function deletes the head node of a `listint_t` list and returns the head node's data (n).
- Prototype: `int pop_listint(listint_t **head)`
- Usage: `int data = pop_listint(&head);`

### 7-get_nodeint_at_index.c

- Function: `get_nodeint_at_index`
- Description: This function returns the nth node of a `listint_t` linked list.
- Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)`
- Usage: `listint_t *node = get_nodeint_at_index(head, 3);`

### 8-sum_listint.c

- Function: `sum_listint`
- Description: This function returns the sum of all the data (n) in a `listint_t` linked list.
- Prototype: `int sum_listint(listint_t *head)`
- Usage: `int sum = sum_listint(head);`

### 9-insert_nodeint.c

- Function: `insert_nodeint_at_index`
- Description: This function inserts a new node at a given position in a `listint_t` list.
- Prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)`
- Usage: `listint_t *new_node = insert_nodeint_at_index(&head, 2, 55);`

### 10-delete_nodeint.c

- Function: `delete_nodeint_at_index`
- Description: This function deletes the node at the specified index of a `listint_t` list.
- Prototype: `int delete_nodeint_at_index(listint_t **head, unsigned int index)`
- Usage: `int result = delete_nodeint_at_index(&head, 3);`

## Usage

You can use these functions in your C programs to create, modify, and manage singly linked lists. Simply include the appropriate header files and use the function prototypes as described in this README.

## License

This code is available under the MIT License. You are free to use, modify, and distribute this code for your projects.
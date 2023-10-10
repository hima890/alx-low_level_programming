# C - Structures, Typedef - Tasks

This repository contains C programs that demonstrate the use of structures and typedefs in C programming.

## Task 0: Poppy (Mandatory)

Define a new type `struct dog` with the following elements:
- `name`, type = `char *`
- `age`, type = `float`
- `owner`, type = `char *`

## Task 1: A dog is the only thing on earth that loves you more than you love yourself (Mandatory)

Write a function that initializes a variable of type `struct dog` with the provided values:
- Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`

## Task 2: A dog will teach you unconditional love. If you can have that in your life, things won't be too bad (Mandatory)

Write a function that prints the details of a `struct dog`:
- Prototype: `void print_dog(struct dog *d);`
- Format: Name, Age, Owner
- If an element of `d` is NULL, print `(nil)` instead of that element. (e.g., if name is NULL, print "Name: (nil)")
- If `d` is NULL, print nothing.

## Task 3: Outside of a dog, a book is a man's best friend. Inside of a dog, it's too dark to read (Mandatory)

Define a new type `dog_t` as a new name for the type `struct dog`.

## Task 4: A door is what a dog is perpetually on the wrong side of (Mandatory)

Write a function that creates a new `struct dog`:
- Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
- You have to store a copy of `name` and `owner`.
- Return `NULL` if the function fails.

## Task 5: How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg (Mandatory)

Write a function that frees memory allocated for `struct dog`:
- Prototype: `void free_dog(dog_t *d);`

These tasks demonstrate the use of structures and typedefs to define and work with custom data types in C. They also involve memory management and printing structured data.
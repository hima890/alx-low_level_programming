#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog data
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 *
 * Description: Defines metadata about the dog and type of dog's struct
*/

struct dog
{
float age;
char *name;
char *owner;
};

/**
 * dog_t - Type def. for dog stuct
*/
typedef struct dog dog_t;


/**
 * init_dog - Initializes a struct dog with provided data.
 * @d: A pointer to the struct dog to be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
*/
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * print_dog - Prints the details of a struct dog.
 * @d: A pointer to the struct dog to be printed.
*/
void print_dog(struct dog *d);
/**
 * new_dog - Creates a new struct dog and stores a copy of name and owner.
 *
 * @name: The name of the new dog.
 * @age: The age of the new dog.
 * @owner: The owner of the new dog.
 * Return: A pointer to the newly created struct dog.
*/
dog_t *new_dog(char *name, float age, char *owner);
/**
* _strdup - Duplicates a string using malloc.
*
* @str: The string to be duplicated.
*
* Return: A pointer to the newly allocated duplicate string,
* or NULL on failure.
*/
char *_strdup(char *str);
/**
 * free_dog - Frees the memory associated with a struct dog.
 *
 * @d: A pointer to the struct dog to be freed.
 *
 * Description:
 *   This function frees the memory associated with a struct dog, including the
 *   dynamically allocated memory for the name and owner fields. If the pointer
 *   to the struct dog is NULL, it does nothing.
 *
 * Return: None (void)
*/
void free_dog(dog_t *d);
#endif

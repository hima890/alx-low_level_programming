#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Creates a new struct dog and stores a copy of name and owner.
 *
 * @name: The name of the new dog.
 * @age: The age of the new dog.
 * @owner: The owner of the new dog.
 *
 * Description:
 *   This function creates a new struct dog, allocates
 *  memory for it, and stores
 *   a copy of the provided name and owner. If any memory allocation fails, or
 *   if the function receives NULL for name or owner, it returns NULL.
 *
 * Return: A pointer to the newly created struct dog.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
struct dog *new;
new = malloc(sizeof(struct dog));

if (new == NULL)
{
/* code */
return (NULL);
}
new->name = name;
new->age = age;
new->owner = owner;

return (new);
}

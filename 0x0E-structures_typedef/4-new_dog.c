#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new struct dog and stores a copy of name and owner.
 *
 * @name: The name of the new dog.
 * @age: The age of the new dog.
 * @owner: The owner of the new dog.
 *
 * Description:
 *   This function creates a new struct dog,
 *  allocates memory for it, and stores
 *   a copy of the provided name and owner. If any memory allocation fails, or
 *   if the function receives NULL for name or owner, it returns NULL.
 *
 * Return: A pointer to the newly created struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;

/* Check if name or owner is NULL */
if (name == NULL || owner == NULL)
return (NULL);

/* Allocate memory for the new struct dog */
new_dog = (dog_t *)malloc(sizeof(dog_t));

/* Check if malloc failed */
if (new_dog == NULL)
return (NULL);

/* Copy the name to the new struct dog */
new_dog->name = _strdup(name);

/* Check if name copy failed */
if (new_dog->name == NULL)
{
free(new_dog);
return (NULL);
}

/* Copy the owner to the new struct dog */
new_dog->owner = _strdup(owner);

/* Check if owner copy failed */
if (new_dog->owner == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}

/* Set the age of the new struct dog */
new_dog->age = age;

return (new_dog);
}

/**
* _strdup - Duplicates a string using malloc.
*
* @str: The string to be duplicated.
*
* Return: A pointer to the newly allocated duplicate string,
* or NULL on failure.
*/
char *_strdup(char *str)
{
char *duplicate;
int length = 0;
int i;
if (str == NULL)
return (NULL);

while (str[length] != '\0')
length++;

duplicate = (char *)malloc(length + 1);

if (duplicate == NULL)
return (NULL);

for (i = 0; i <= length; i++)
duplicate[i] = str[i];

return (duplicate);
}

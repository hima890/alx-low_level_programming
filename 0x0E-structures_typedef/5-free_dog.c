#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

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
void free_dog(dog_t *d)
{
if (d != NULL)
{
/* Free the dynamically allocated name and owner fields */
free(d->name);
free(d->owner);
/* Free the struct dog itself */
free(d);
}
}

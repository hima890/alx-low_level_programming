#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Initializes a struct dog with provided data.
 *
 * @d: A pointer to the struct dog to be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description:
 *   This function initializes a struct dog with the provided data. It assigns
 *   the name, age, and owner to the respective fields of the struct.
 *
 * Return: None (void)
 *
 * Notes:
 *   - The function expects a valid pointer to a struct dog (not NULL) as the
 *     first parameter.
 *   - It is the caller's responsibility to allocate memory for the struct dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
/* code */
d->name = name;
d->age = age;
d->owner = owner;
}

}

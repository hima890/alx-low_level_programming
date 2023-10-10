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
 *
 * @d: A pointer to the struct dog to be initialized.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
*/
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

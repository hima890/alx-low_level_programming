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

typedef struct dog dog_t;
/**
 * dog_t - Type def. for dog stuct
*/
#endif

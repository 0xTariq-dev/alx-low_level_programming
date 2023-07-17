#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - A structure to save the data of a dog.
 * @name: the name of dog.
 * @age: the age of the dog.
 * @owner: the name of the owner.
 *
 * Description: A structure to save the name, age and the owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

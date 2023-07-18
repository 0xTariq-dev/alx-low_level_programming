/*
 * Author: 0xTariq-dev
 * File: 4-new_dog.c
 */

#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Creates a new dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The name of owner.
 *
 * Return: The contents of structure.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_cpy, *owner_cpy;
	int i = 0;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);

	name_cpy = malloc(sizeof(*name) + 1);
	owner_cpy = malloc(sizeof(*owner) + 1);

	if (name_cpy == NULL)
		return (NULL);

	if (name_cpy == NULL)
		return (NULL);

	for (; name[i] != '\0'; i++)
		name_cpy[i] = name[i];
	name_cpy[i] = '\0';

	for (; owner[i] != '\0'; i++)
		owner_cpy[i] = owner[i];
	owner_cpy[i] = '\0';

	new_dog->name = name_cpy;
	new_dog->age = age;
	new_dog->owner = owner_cpy;

	return (new_dog);

}

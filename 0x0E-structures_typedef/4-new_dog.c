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
	int i = 0, name_l = 0, owner_l = 0;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[name_l])
		name_l++;
	while (owner[owner_l])
		owner_l++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	name_cpy = malloc(name_l + 1);
	if (name_cpy == NULL)
	{
		free(name_cpy);
		return (NULL);
	}
	for (; name[i]; i++)
		name_cpy[i] = name[i];
	name_cpy[i] = '\0';

	owner_cpy = malloc(owner_l + 1);
	if (owner_cpy == NULL)
	{
		free(owner_cpy);
		return (NULL);
	}
	for (; owner[i]; i++)
		owner_cpy[i] = owner[i];
	owner_cpy[i] = '\0';

	new_dog->name = name_cpy;
	new_dog->age = age;
	new_dog->owner = owner_cpy;
	return (new_dog);

}

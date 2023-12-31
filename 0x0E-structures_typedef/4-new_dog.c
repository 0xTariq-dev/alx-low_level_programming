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
 * Return: A pointer to new_dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i = 0, name_l = 0, owner_l = 0;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[name_l])
		name_l++;
	while (owner[owner_l])
		owner_l++;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = malloc(name_l + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (; i <= name_l; i++)
		new_dog->name[i] = name[i];

	new_dog->owner = malloc(owner_l + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	for (i = 0; i <= owner_l; i++)
		new_dog->owner[i] = owner[i];

	new_dog->age = age;
	return (new_dog);

}

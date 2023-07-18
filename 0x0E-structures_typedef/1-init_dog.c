/*
 * Author: 0xTariq-dev
 * File: 1-init_dog.c
 */

#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct dog.
 * @d: The variable to initialize.
 * @name: The name of the dog.
 * @age: The dog age.
 * @owner: The owner name.
 *
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}

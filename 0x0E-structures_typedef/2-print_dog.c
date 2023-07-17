/*
 * Author: 0xTariq-dev
 * File: 0xTariq-dev
 */

#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the structure named dog.
 * @d: The structure to print.
 *
 * Return: The contents of structure.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);

	return;

}

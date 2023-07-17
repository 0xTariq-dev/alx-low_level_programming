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
	if (!d)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);

	return;

}

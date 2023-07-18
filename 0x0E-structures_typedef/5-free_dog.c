/*
 * Author: 0xTariq-dev
 * File: 5-free_dog.c
 */

#include <stdio.h>
#include "dog.h"

/**
 * free_dog - free the structure named dog.
 * @d: The structure to free.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}

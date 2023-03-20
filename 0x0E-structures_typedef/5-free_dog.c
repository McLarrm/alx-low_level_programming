#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees a dog
 * @d: Dog
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}

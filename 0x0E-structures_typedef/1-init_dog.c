#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Intializez a variable of type
 * @d: Dog
 * @name: Dog's name
 * @age: Age
 * @owner: The owner
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

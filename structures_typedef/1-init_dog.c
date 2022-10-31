#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Information about a poppy
 *
 * @d: pointer
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: void
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

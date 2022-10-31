#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Print struct dog
 *
 * @d: pointer
 *
 * Return: If an element of d is NULL, print (ni)l instead of this element.
 * if name is NULL, print Name: (nil) If d is NULL print nothing.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Name: (nil)");
		printf("Age: 0.000000");
		printf("Owner: (nil)");
	}
}

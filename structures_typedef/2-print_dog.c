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
	if (d == NULL)
		printf("\n");
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
	{
		printf("%s\n", d->name);
		printf("%f\n", d->age);
		printf("%s\n", d->owner);
	}
}

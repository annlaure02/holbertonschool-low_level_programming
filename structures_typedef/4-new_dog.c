#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: parameter of the function
 * Return: int
 */

int _strlen(char *s)
{
	int n = 0;

	while (*s != '\0')
	{
		n++;
		s++;
	}
	return (n);
}

/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest
 *
 * @dest: parameter of the function
 * @src: parameter of the function
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - Create a new dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: Store a copy of name and owner and return NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (new->name == NULL)
	{
		free(new->name);
		return (NULL);
	}
	new->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (new->owner == NULL)
	{
		free(new->owner);
		return (NULL);
	}

	new->name = _strcpy(new->name, name);
	new->age = age;
	new->owner = _strcpy(new->owner, owner);
	return (new);
}

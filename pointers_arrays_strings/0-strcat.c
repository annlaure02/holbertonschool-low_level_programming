#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: parameter of the function
 * @src: parameter of the function
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (dest[len] != '\0')
		len++;

	while (src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';

	return (dest);
}

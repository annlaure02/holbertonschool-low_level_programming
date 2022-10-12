#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: parameter of the function
 * @src: parameter of the function
 * @n: parameter of the function
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i = 0;

	while (dest[len] != '\0')
		len++;

	while (i < n && src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	return (dest);
}

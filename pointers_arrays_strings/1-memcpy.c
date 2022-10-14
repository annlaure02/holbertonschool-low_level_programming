#include "main.h"

/**
 * _memcpy - copie memory area
 *
 * @dest: parameter of the function
 * @src: parameter of the function
 * @n: parameter of the function
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

#include "main.h"

/**
 * puts2 - prints every other character of a string, starting
 * with the first character
 *
 * @str: parameter of the function
 *
 * Return: void
 */

void puts2(char *str)
{
	int len = 0;
	int n;

	while (str[len])
		len++;
	for (n = 0; n < len; n++)
	{
		_putchar(str[n]);
		n += 1;
	}
	_putchar('\n');
}

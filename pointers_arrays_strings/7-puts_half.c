#include "main.h"

/**
 * puts_half - print half of a string
 *
 * @str: parameter of the function
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;
	int n;

	while (str[len])
		len++;

	if (len % 2 == 0)
	{
		n = len / 2;
		for (; str[n]; n++)
			_putchar(str[n]);
	}
	else
	{
		n = len / 2 + 1;
		for (; str[n]; n++)
			_putchar(str[n]);
	}
	_putchar('\n');
}

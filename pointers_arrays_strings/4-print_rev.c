#include "main.h"

/**
 * print_rev - print a string, in reverse, followed by a new line
 *
 * @s: character of the function
 *
 * Return: char
 */

void print_rev(char *s)
{
	int f = 0;
	int i = 0;

	while (s[f] != '\0')
	{
		f++;
	}
	for (i = f - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}

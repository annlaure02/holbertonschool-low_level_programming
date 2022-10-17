#include "main.h"

/**
 * _puts_recursion - print a string
 *
 * @s: parameter of the function
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

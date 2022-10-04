#include "main.h"

/**
 * print_alphabet - fonction print_alphabet
 *
 * Return: void
 */

void print_alphabet(void)
{
	char az;

	for (az = 'a' ; az <= 'z' ; az++)
	{
		_putchar(az);
	}
	_putchar('\n');
}

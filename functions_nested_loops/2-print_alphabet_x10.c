#include "main.h"

/**
 * print_alphabet_x10 - check the code.
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char az;

	int i = 0;

	for (i = 0; i < 10; i++)
	{
		for (az = 'a' ; az <= 'z' ; az++)
		{
			_putchar(az);
		}
		_putchar('\n');
	}
}


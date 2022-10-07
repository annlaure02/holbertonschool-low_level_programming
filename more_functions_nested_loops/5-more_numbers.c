#include "main.h"

/**
 * more_numbers - print 10 times the numbers, from 0 to 14
 *
 *
 * Return: void
 */

void more_numbers(void)
{
	int l;
	int c;

	for (l = 0; l <= 9; l++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
				_putchar((c / 10) + '0');
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
	}
}

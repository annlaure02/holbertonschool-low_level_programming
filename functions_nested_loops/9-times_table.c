#include "main.h"

/**
 * times_table - check the code.
 *
 * Return: void
 */

void times_table(void)
{
	int l, c, r;

	for (l = 0; l <= 9; l++)
	{
		for (c = 0; c <= 9; c++)
		{
			r = l * c;
			if (r <= 9)
			{
				_putchar(r + '0');
			}
			else
			{
				_putchar(r / 10 + '0');
				_putchar(r % 10 + '0');
			}
			if (c != 9)
			{
				_putchar(',');
				if (l * (c + 1) <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

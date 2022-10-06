#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 *
 *
 * Return: void
 */

void jack_bauer(void)
{
	int h = 0;

	int min;

	for (h = 0; h < 24; h++)
	{
		min = 0;
		for (min = 0; min < 60; min++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}

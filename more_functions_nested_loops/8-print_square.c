#include "main.h"

/**
 * print_square - prints a square
 * @size: size
 *
 * Return: a square
 */

void print_square(int size)
{
	int l = 0;
	int c;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (c = 0; c < size; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}


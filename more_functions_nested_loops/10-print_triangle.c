#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size
 *
 * Return: a triangle
 */

void print_triangle(int size)
{
	int l;
	int c;

	if (size > 0)
	{
		for (l = 0; l <= size; l++)
		{
			for (c = l; c < size; c++)
			{
				_putchar(' ');
			}
			for (c = 0; c <= l; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}


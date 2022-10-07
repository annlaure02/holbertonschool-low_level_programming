#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: ligne
 *
 * Return: diagonale line
 */

void print_diagonal(int n)
{
	int c;
	int l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (c = 0; c < l; c++)
			{
				_putchar(' ');
			}
			_putchar ('\\');
			_putchar('\n');
		}
	}
	else
		_putchar ('\n');
}

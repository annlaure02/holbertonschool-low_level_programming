#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - add positive numbers
 *
 * @argc: number of arguments
 * @argv: arguments in the array
 *
 * Return: Print the result, If no number is passed to the program, print 0,
 * if one of the number contains symbols that are not digits, print Error
 * and return 1
 */

int main(int argc, char *argv[])
{
	int i, j, r;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		r += atoi(argv[i]);
	}
	printf("%d\n", r);
	return (0);
}

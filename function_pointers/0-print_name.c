#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - print a name
 *
 * @name: name to print
 * @f: funtion pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	f(name);
}

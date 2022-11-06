#include "variadic_functions.h"

/**
 * _char - print a character
 * @ap: variable of va list
 * Return: void
 */
void _char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 * _int - print a integer
 * @ap: variable of va list
 * Return: void
 */
void _int(va_list ap)
{
	printf("%d", va_arg(ap, int));
}

/**
 * _float - print a float
 * @ap: variable of va list
 * Return: void
 */
void _float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 * _string - print a string
 * @ap: variable of va list
 * Return: void
 */
void _string(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - print anything
 *
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	_print prt[] = {
		{"c", _char},
		{"i", _int},
		{"f", _float},
		{"s", _string},
		{NULL, NULL}
	};
	int x = 0, y = 0;
	char *separator = "";
	va_list ap;

	va_start(ap, format);

	while (format != NULL && format[x] != '\0')
	{
		while (prt[y].a)
		{
			if (*prt[y].b == format[x])
			{
				printf("%s", separator);
				prt[y].a(ap);
				separator = ", ";
			}
			y++;
		}
		y = 0;
		x++;
	}
	printf("\n");
	va_end(ap);
}

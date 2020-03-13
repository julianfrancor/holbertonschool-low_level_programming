#include "variadic_functions.h"

/**
 * print_strings - function that
 * prints strings, followed by a new line.
 * @n: is the number of integers passed to
 * the function
 * @separator: is the string to be printed
 * between numbers
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	char *str;
	unsigned int i = 0;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}

#include "variadic_functions.h"

/**
 * print_numbers - function that
 *  prints numbers, followed by a new line.
 * @n: is the number of integers passed to
 * the function
 * @separator: is the string to be printed
 * between numbers
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int num;
	unsigned int i;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(valist, int);

		if (separator)
			{
			printf("%d%s", num, separator);
			}
		else
			printf("%d", num);
	}
	va_end(valist);
	printf("\n");
}

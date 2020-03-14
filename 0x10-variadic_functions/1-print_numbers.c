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
	i = 0;
	while (i < n)
	{
		num = va_arg(valist, int);
		printf("%d", num);
		if (i < n - 1 && separator)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(valist);
}

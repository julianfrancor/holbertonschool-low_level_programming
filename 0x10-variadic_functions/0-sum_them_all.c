#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that returns
 * the sum of all its parameters.
 * @n: is the number of parameter.
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list valist;

	if (n == 0)
		return (0);
	va_start(valist, n);
	i = 0;
	while (i < n)
	{
		sum += va_arg(valist, int);
		i++;
	}
	va_end(valist);

	return (sum);
}

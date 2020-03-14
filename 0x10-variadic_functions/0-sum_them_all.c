#include "variadic_functions.h"

/**
 * sum_them_all - function that returns
 * the sum of all its parameters.
 * @n: is the number of parameter.
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	
	int sum = 0;
	unsigned int i = 0;
	va_list valist;

	if (n == 0)
		return (0);
	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(valist, int);
	}
	va_end(valist);

	return (sum);
}

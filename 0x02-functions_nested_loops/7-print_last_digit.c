#include "holberton.h"
/**
 * print_last_digit - function that prints
 * the last digit of a number.
 * @n: input is intiger
 * Return:@n
 */

int print_last_digit(int n)
{
	int r, q;

	r = n % 10;
	if (r < 0)
	{
		q = r * (-1);
	}
	else
	{
		q = r;
	}
	_putchar (q + '0');
	return (q);
}

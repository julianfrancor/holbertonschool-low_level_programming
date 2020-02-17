#include "holberton.h"

/**
 * print_number - function that prints an intiger,
 * followed by a new line.
 * @n: input
 * Return: void
 */

void print_number(int n)
{
	int nNew, i, q, base;
	
	nNew = n;

	while (nNew != 0)
	{
		nNew = nNew / 10;

		i++;
	}
	base = 10;
	while(i != 0)
	{
	base *= i;
	
	q = n / base;
	
	_putchar(q + '0'); 	
	
	--i;
	}
}

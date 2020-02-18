#include "holberton.h"

/**
 * swap_int - function that swaps the
 * values of two integers.
 * @a: input is a parameter
 * @b: input is a parameter
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

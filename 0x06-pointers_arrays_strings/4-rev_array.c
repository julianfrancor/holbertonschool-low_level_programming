#include "holberton.h"

/**
 * reverse_array - function that reverses the
 * content of an array of integers.
 * @a: input is array
 * @n: input is intiger
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, m, b;

	m = n - 1;

	for (i = 0; i < m; i++)
	{
		b = a[i];
		a[i] = a[m];
		a[m] = b;
	--m;
	}
}

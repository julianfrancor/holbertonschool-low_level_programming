#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - function that
 * prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: array is char
 * @size: intiger
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2, max, order, lenght;

	max = size + 1;
	order = size - 1;
	sum1 = 0;
	sum2 = 0;
	lenght = size * size;

	for (i = 0; i < lenght; i += max)
	{
		sum1 += a[i];
	}
	for (j = order; j <= (lenght - size); j += order)
	{
		sum2 += a[j];
	}
	printf("%d, %d\n", sum1, sum2);
}

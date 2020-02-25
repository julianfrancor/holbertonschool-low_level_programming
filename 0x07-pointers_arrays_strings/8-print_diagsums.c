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
	int i, j, sum1, sum2;
	
	--size;
	for (i = 0; i <= size; i++)
	{
		for (j = 0; j <= size; j++)
		{
			sum1 = sum1 + a[i+j][j+i];
			sum2 = sum2 + a[size - i][size - j]; 
			printf("%d, %d\n", k % size, );
		}
	}
}

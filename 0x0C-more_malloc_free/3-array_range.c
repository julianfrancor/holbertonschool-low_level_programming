#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - function that
 * function that creates an array of integers.
 * @min: int
 * @max: int
 * Return: int
 */

int *array_range(int min, int max)
{
	int  *ptr, i, lenght;

	if (min > max)
		return (NULL);
	lenght = max - min + 1;
	ptr = malloc(sizeof(int) * lenght);
	if (!ptr)
		return (NULL);
	for (i = 0; i < lenght; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}

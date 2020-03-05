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
	int  *ptr, i;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (!ptr)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		ptr[i] = i;
	}
	return (ptr);
}

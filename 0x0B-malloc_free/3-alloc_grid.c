#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function that
 * returns a pointer to a 2 dimensional
 * array of integers.
 * @width: int
 * @height: int
 * Return: Null for fail or int for success
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int k = 0, q = 0, i;

	if (width <= 0 && height <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);
	if (!arr)
		return (NULL);
	for (k = 0; k < height; k++)
	{
		arr[k] = (int *) malloc(sizeof(int) * width);
		if (!arr)
		{
			for (i = 0; i < k; i++)
			{
				free(arr[i]);
			}
			free(arr);
			return (0);
		}
		/**
		 *initializing the matriz with zero.
		 */
		for (q = 0; q < width; q++)
		{
			arr[k][q] = 0;
		}
	}
	return (arr);
}

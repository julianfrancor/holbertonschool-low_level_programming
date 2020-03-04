#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - function that
 * frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 * @grid: array of pointers int
 * @height: int
 * Return: Void
 */

void free_grid(int **grid, int height)
{
	grid = (int **) malloc (sizeof(int *) * height);
	free(grid);
}

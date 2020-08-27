
#include "search_algos.h"
#include <math.h>
#include <stdio.h>


/**
 * jump_search - function that searches for a value in a sorted array
 * of integers using the Jump search algorithm
 * @array: is a pointer to the first element of the array to search in,
 * assume that array will be sorted in ascending order
 * @size: is the number of elements in array
 * @value: is the value to search for,
 * assume that value won’t appear more than once in array
 * If value is not present in array or if array is NULL,
 * your function must return -1
 * Return: the first index where value is located
 * You have to use the square root of the size of the array as the jump step.
 * array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = 0, prev = 0, ahead = 0;

	/*the prev will jump the blocks value, starting from zero*/
	prev = 0;
	ahead = 0;

	if (array == NULL)
		return (-1);

	/*the optimal value of the step is (n^(1/2)) = sqrt(n)*/
	step = sqrt(size);
	/*block Jump*/
	while ((ahead < size) && (array[ahead] < value))
	{
		printf("Value checked array[%ld] = [%d]\n", ahead, array[ahead]);
		prev = ahead;
		ahead += step;
	}
	printf("Value found between indexes [%ld] = [%ld]\n", prev, ahead);

	if (ahead >= size)
		ahead = size - 1;

	/*linear search in the block that our target is*/
	while (array[prev] < value && prev < ahead)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev++;
	}
	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);

	if (array[prev] == value)
		return (prev);

	return (-1);
}

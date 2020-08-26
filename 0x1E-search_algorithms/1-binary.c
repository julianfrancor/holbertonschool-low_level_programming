
#include "search_algos.h"


/**
 * binary_search - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: is a pointer to the first element of the array to search in,
 * assume that array will be sorted in ascending order
 * @size: is the number of elements in array
 * @value: is the value to search for,
 * assume that value won’t appear more than once in array
 * If value is not present in array or if array is NULL,
 * your function must return -1
 * Return: index where value is located
 * array[] = {10, 1, 42, 3, 4, 42, 6, 7, -1, 9}
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, middle = 0, i = 0;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		middle = (right + left) / 2;
		if (value == array[middle])
			return (middle);
		else if (value < array[middle])
			right = middle - 1;
		else if (value > array[middle])
			left = middle + 1;
	}
	return (-1);

}

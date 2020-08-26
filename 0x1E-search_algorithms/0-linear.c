
#include "search_algos.h"


/**
 * linear_search - function that searches for a value
 * in an array of integers using the Linear search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: first index where value was located
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0, flag = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int) i, (int) array[i]);
			return (i);
		}
		else if (array[i] != value)
		{
			flag = 1;
			printf("Value checked array[%d] = [%d]\n", (int) i, (int) array[i]);
		}
	}
	if (flag == 1)
		return (-1);
	return (i);
}

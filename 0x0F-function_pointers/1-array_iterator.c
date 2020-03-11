#include "function_pointers.h"

/**
 * array_iterator - function that
 * executes a function given as a parameter
 * on each element of an array.
 * @array: input array
 * @size: is unsigned int size of the array
 * @action: is a pointer to a function
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	
	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

#include "holberton.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: unsigned long int pointer
 * @index: unsigned int is the index, starting from 0 of
 * the bit you want to set.
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int auxbinary = 1;

	if (n == NULL)
		return (-1);
	auxbinary = auxbinary << index;
	if (auxbinary == 0)
		return (-1);
	*n = *n | auxbinary;
		return (1);
}

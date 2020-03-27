#include "holberton.h"

/**
 * get_bit - function that prints the binary representation of a number.
 * @n: unsigned long int number to be converted to binary.
 * @index: unsigned int is the index, starting from 0 of
 * the bit you want to get.
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int auxbinary = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	auxbinary = auxbinary << index;

	if (n & auxbinary)
		return (1);
	else
		return (0);
}

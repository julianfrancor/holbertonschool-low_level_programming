#include "holberton.h"

/**
 * flip_bits - function that sets the value of a bit to 0 at a given index.
 * @n: unsigned long int number
 * @m: unsigned long int number
 * Return: returns the number of bits you would need
 * to flip to get from one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned long int auxbinary = n ^ m;
	unsigned int bitstoflip = 0;

	while (auxbinary)
	{
		bitstoflip = bitstoflip + (auxbinary & 1);
		auxbinary = auxbinary >> 1;
	}
	return (bitstoflip);
}

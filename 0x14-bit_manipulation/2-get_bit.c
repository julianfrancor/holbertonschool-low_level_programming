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
	int array_int[((sizeof(unsigned long int) * 8) - 1)], i;
	unsigned int contador = 0;
	unsigned long int k;

	if (n == 0)
		return (0);
	else if (n != 0)
	{
		for (i = ((sizeof(unsigned long int) * 8) - 1); i >= 0; i--)
		{
			k = n >> i;
			if (k)
			{
				if (k & 1)
				{
					array_int[i] = 1;
					contador++;
				}
				else
				{
					array_int[i] = 0;
					contador++;
				}
			}
		}
	}
	if (index > contador)
		return (-1);
	return (array_int[index]);
}

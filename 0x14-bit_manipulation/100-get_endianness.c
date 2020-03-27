#include "holberton.h"

/**
 * get_endianness - function that checks the endianness.
 * Return: int 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int n = 1;
	char *c = (char *)&n;

	if (*c)
		return (1);/*little endian*/
	else
		return (0);/*big endian*/
}

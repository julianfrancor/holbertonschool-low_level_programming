#include "holberton.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: unsigned long int;
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int k;


	if (n == 0)
		_putchar('0');
	else
	{
		for (i = ((sizeof(unsigned long int) * 8) - 1); i >= 0; i--)
		{
			k = n >> i;
			if (k)
			{
				if (k & 1)
					_putchar('1');
				else
					_putchar('0');
			}
		}
	}
}

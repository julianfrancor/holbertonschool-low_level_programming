#include "holberton.h"

/**
 * print_number - function that
 * prints an integer.
 * @n: input is an intiger
 * Return: void
 */

void print_number(int n)
{
	int p = 0, m = 0, k;
	
	/*
	 * conditinal to cover the case in which
	 * they give us the biggest int negative number
	 * this condtional raise a flag -> P that we will use
	 * in the future to print something in case this
	 * conditional is true.
	 * we divide this big number and remove the 8 for a while
	 * we gonna print it later at the end of the program.
	 */
	if (n == -2147483648)
	{
		m = m / 10;
		p = 1;
	}
	/*
	 * conditional that prints a character '-' to,
	 * represent that the number we gonna print is negative
	 * and then, changes the sign of the number, to work easier
	 * with it, and it will help us because we can only print with putchar
	 */ 
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	m = n;
	while (n != 0)
	{
		k =1;
		while (n/10)
		{
			k = k * 10;
			m = m / 10;
		}
		_putchar(m);
		n = m;
		n = n % k;
	}
	if (p == 1)
		_putchar('8');
	if (m == 0)
		_putchar('0');
}

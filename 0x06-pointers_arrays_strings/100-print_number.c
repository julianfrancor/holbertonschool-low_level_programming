#include "holberton.h"

/**
   * print_number - function that
    * prints an integer.
     * @n: input is an intiger
      * Return: void
       */

void print_number(int n)
{
	int i = 0;

	/*
	 * conditinal to cover the case in which
	 * they give us the biggest int negative number
	 * this condtional raise a flag -> P that we will use
	 * in the future to print something in case this
	 * conditional is true.
	 * we divide this big number and remove the 8 ifor a while
	 * we gonna print it later at the end of the program.
	*/
	
	/*
	 * conditional that prints a character '-' to,
	 * represent that the number we gonna print is negative
	 * and then, changes the sign of the number, to work easier
	 * with it, and it will help us because we can only print with putchar
	 */ 
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	while (i < n / 10)
	{
		print_number(i);
	i++;
	}
	_putchar((n % 10) + '0');
}

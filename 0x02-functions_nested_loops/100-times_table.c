#include "holberton.h"
/**
 * print_times_table - function that
 * prints the n times table, starting with 0.
 * @n: intput type int
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, mult;

	mult = 1;
	if (!(n > 15))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mult = i * j;
				if (mult > 9)
				{
					_putchar(',');
					_putchar(' ');
					if (mult < 100)
						_putchar(' ');
					if (mult > 99)
						_putchar((char)(mult / 100) + '0');
					_putchar((char)((mult / 10) % 10) + '0');
					_putchar((char)(mult % 10) + '0');
				}
				else if (mult <= 9)
				{
					if (j > 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar((char) mult + '0');
				}
			}
			_putchar('\n');
		}
	}
}

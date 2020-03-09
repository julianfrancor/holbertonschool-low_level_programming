#include "holberton.h"

/**
 * print_times_table - function that
 * prints the n times table, starting with 0.
 * Return: void
 */

void print_times_table(int n)
{
	int i, j;
	char f, k;
	
	if (!(n < 0 || n > 15))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				f = (i * j) / 10;
				k = (i * j) % 10;
				if (f == 0)
				{
					if (!(j == 0))
					{
					_putchar(' ');
					}
					_putchar(k + '0');
					if (!(j == n))
					{
					_putchar(',');
					_putchar(' ');
					}
				}
				else
				{
					_putchar(f + '0');
					_putchar(k + '0');
					if (!(j == n))
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}

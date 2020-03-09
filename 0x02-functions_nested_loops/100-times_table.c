#include "holberton.h"

/**
 * print_times_table - function that
 * prints the n times table, starting with 0.
 * Return: void
 */

void print_times_table(int n)
{
	int i, j;
	char w, f, k, q;
	
	if (!(n < 0 || n > 15))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				w = (i * j) / 100;
				f = (i * j) / 10;
				q = ((i * j) / 10) % 10;
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
					if ((j < 9) || (i < 9))
						_putchar(' ');
					}
				}
				else
				{
					if ((i * j) > 99)
					{
						_putchar(w + '0');
						_putchar(q + '0');
						_putchar(k + '0');
					}
					else
					{
						_putchar(' ');
						_putchar(f + '0');
						_putchar(k + '0');
					}
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

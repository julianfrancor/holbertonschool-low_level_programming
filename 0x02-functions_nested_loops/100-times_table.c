#include "holberton.h"
/**
 * print_times_table - function that
 * prints the n times table, starting with 0.
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, mult = 1;
	char w, f, k, q;
	
	if (!(n < 0 || n > 15))
	{
		for (i = 0; i <= n; i++)i
		{
			for (j = 0; j <= n; j++)
			{
				mult = i * j; 
				if ((mult / 10) == 0)
				{
					if (j > 0)
						_putchar(' ');
					if (!(j == 0))
						_putchar(' ');
					_putchar((mult % 10) + '0');
					if (!(j == n))
					{
						_putchar(',');
						if ((i <= n))
							_putchar(' ');
					}
				}
				else
				{
					if ((i * j) > 99)
					{
						_putchar((mult / 100) + '0');
						_putchar(((mult / 10) % 10) + '0');
						_putchar((mult % 10) + '0');
					}
					else
					{
						_putchar(' ');
						_putchar((mult / 10) + '0');
						_putchar((mult % 10)+ '0');
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

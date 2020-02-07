#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	i = 0;

	for (i = 0; i <= 9; ++i)
	{
		j = 0;

		while (j <= 9)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (j != 9 || i != 9)
			{
			putchar(44);
			putchar(32);
			}
		j++;
		}
	}
	putchar('\n');
	return (0);
}

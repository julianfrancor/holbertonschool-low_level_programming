#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, j = 0, k = 0, k2 = 0, q = 0, q2 = 0;

	for (i = 0; i <= 98; ++i)
	{
		j = i + 1;
		while (j <= 99)
		{
			k = i / 10;
			q = i % 10;
			k2 = i / 10;
			q2 = i % 10;
			putchar(k + '0');
			putchar(q + '0');	
			putchar(k2 + '0');
			putchar(q2 + '0');

			if (j != 99 && i != 98)
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

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, j = 0, b = 0, k = 0, k2 = 0, q = 0, q2 = 0;

	for (i = 0; i <= 98; ++i)
	{
		b = i + 1;
		for (j = b; j <= 99; j++)
		{

			k = i / 10;
			q = i % 10;
			k2 = j / 10;
			q2 = j % 10;
			putchar(k + '0');
			putchar(q + '0');
			putchar(' ');
			putchar(k2 + '0');
			putchar(q2 + '0');

			if (!(j == 99 && i == 98))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

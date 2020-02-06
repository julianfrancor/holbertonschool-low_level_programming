#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char j;

	j = 'a';

	while (j <= 'z')
{
	if (j != 'e' && j != 'q')
{
	putchar(j);
}
	j++;
}
	putchar('\n');
	return (0);
}

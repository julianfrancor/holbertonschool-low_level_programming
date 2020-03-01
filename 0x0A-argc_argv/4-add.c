#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <ctype.h>

/**
 * main - program that prints its
 * name, followed by a new line.
 * @argc: argument count
 * @argv: array of strings
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int strings = 1;
	int digits;
	int sum;

	if (argc == 1)
	{
		puts("0");
		return (0);
	}
	while (strings < argc)
	{
		digits = 0;
		while (argv[strings][digits] != '\0')
		{
			if (isdigit(argv[strings][digits]) == 0)
			{
				puts("Error");
				return (1);
			}
			digits++;
		}
	strings++;
	}
	for (strings = 1; strings < argc; strings++)
	{
		sum += atoi(argv[strings]);
	}
	printf("%i\n", sum);

	return (0);
}

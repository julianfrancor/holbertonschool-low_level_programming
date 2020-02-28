#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints its
 * name, followed by a new line.
 * @argc: argument count
 * @argv: array of strings
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int mult;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	else
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d \n", mult);
	}
	return (0);
}

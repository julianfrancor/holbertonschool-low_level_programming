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
	int i = 0;
	int count = 0;
	int money;
	int coins [] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	money = atoi(argv[1]);
	if (money < 0)
	{
		puts("0");
		return (0);
	}

	while (money != 0)
	{
		if (money >= coins[i])
		{	money = money - coins[i];
			count++;
		}
		else
			i++;
	}
	printf("%d\n", count);
	return (0);
}

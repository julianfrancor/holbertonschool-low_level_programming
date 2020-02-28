#include <stdio.h>

/**
 * main - program that prints its
 * name, followed by a new line.
 * @argc: argument count
 * @argv: array of strings
 * Return: 0 for success
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s \n", *argv);
	return (0);
}

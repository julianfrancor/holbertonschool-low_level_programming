#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charjf;
	int intjf;
	long int lijf;
	long long int lolijf;
	float floatjf;

	printf("Size of a char: %ld byte(s)\n", sizeof(charjf));
	printf("Size of an int: %ld byte(s)\n", sizeof(intjf));
	printf("Size of a long int: %ld byte(s)\n", sizeof(lijf));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(lolijf));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatjf));
	return (0);
}

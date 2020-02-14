#include <stdio.h>

/**
   * main - check the code for Holberton School students.
    *
     * Return: Always 0.
      */
int main(void)
{
	long int i;
	long int j;

	i = 612852475143;

	for (j = 2; j <= (i / 2); j++)
	{
		if ((i % j) == 0)
		{
		i = i / j;
		j = 1;
		}
	}
	printf("%ld \n", i);
	return (0);
}

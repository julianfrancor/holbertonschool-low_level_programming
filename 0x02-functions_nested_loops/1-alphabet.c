#include "holberton.h"

/**
   * print_alphabet() - prints the alphabet to  stdout
    * is void because it doesn't require any input
     * and doesn't give any return value
      *
       *
	*/

void print_alphabet(void)
{
	char i;

	for (i = 97; i <= 122; i++)
		_putchar(i);
		_putchar('\n');
}

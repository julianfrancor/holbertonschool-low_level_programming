#include <stdio.h>
#include "3-calc.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
    int num1, num2;
    char operator;

    if (argc != 3)
	{
		puts("Error");
		exit(98);
	}
    if ((num2 == 0) && ((operator == '/') || (operator == '%')))
    {
    	puts("Error");
		exit(100);
    }

    num1 = atoi (argv[1]);
    num2 = atoi (argv[3]);

    get_op_func()
}

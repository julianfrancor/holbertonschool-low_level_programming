#include <stdlib.h>
#include "3-calc.h"

/**
 * main - program that prints its
 * name, followed by a new line.
 * @argc: argument count
 * @argv: array of strings
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
int num1, num2, result;
char *operator;

operator = argv[2];

if (argc != 4)
{
	puts("Error");
	exit(98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
if ((num2 == 0) && ((*operator == '/') || (*operator == '%')))
{
puts("Error");
exit(100);
}

result = get_op_func(operator)(num1, num2);
printf("%d\n", result);
return (0);
}

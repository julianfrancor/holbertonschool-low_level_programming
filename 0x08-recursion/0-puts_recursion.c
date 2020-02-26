#include "holberton.h"

/**
 * _puts_recursion - function that
 * prints a string, followed by a new line.
 * @s: string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion((void *)(s + 1));
	}
	else
		_putchar('\n');
}

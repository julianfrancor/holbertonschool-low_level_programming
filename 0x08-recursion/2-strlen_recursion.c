#include "holberton.h"

/**
 * _strlen_recursion - function that
 * returns the length of a string.
 * @s: string
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s != '\0')
	{
		a = _strlen_recursion((void *)(s + 1));
		a += 1;
	}
	return (a);

}

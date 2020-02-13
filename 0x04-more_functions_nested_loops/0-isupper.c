#include "holberton.h"

/**
 * isupper - function that checks for uppercase character.
 * @c: input of the function and is intiger.
 * Return: 1 for success 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

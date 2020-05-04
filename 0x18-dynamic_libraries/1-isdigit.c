#include "holberton.h"

/**
 * _isdigit - function that checks for uppercase character.
 * @c: input of the function and is intiger.
 * Return: 1 for success 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

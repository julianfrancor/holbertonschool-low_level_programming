#include "holberton.h"
/**
 * _islower - checks for the lowercase
 * @c: input is intiger
 * Return: 1 if c is lowercase 0 if c is other
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
		else
		{
			return (0);
		}
}

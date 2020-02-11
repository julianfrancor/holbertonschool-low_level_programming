#include "holberton.h"
/**
 * _abs - function that computes the absolute value of an integer
 * @n: input is intiger
 * Return:@n
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n = n * (-1));
	}
	else if (n == 0)
	{
		return (0);
	}
	else 
	{
		return (n);
	}
}

#include "holberton.h"

/**
 * function2 - function that
 * returns the root of the number n
 * @r: intiger root
 * @n: intiger
 * Return: int
 */

int function2(int n, int r)
{
	if (r * r == n)
		return (r);
	if (r * r < n)
		r = function2(n, r + 1);
	if (r * r > n)
		return (-1);
	return (r);

}

/**
 * _sqrt_recursion - function that
 * returns the natural square root of a number.
 * @n: intiger
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (function2(n, 0));
}

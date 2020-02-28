#include "holberton.h"

/**
 * functionPrimo - function that
 * returns 1 if the input integer is
 * a prime number otherwise return 0
 * @n: intiger
 * @y: intiger
 * Return: int
 */

int functionPrimo(int n, int y)
{
	if (n % y == 0 || n < 2)
		return (0);
	if (n - 1 == y)
		return (1);
	if (n > y)
		return (functionPrimo(n, y + 1));
	return (1);
}

/**
 * is_prime_number - function that
 * returns 1 if the input integer is
 * a prime number otherwise return 0
 * @n: intiger
 * Return: int
 */

int is_prime_number(int n)
{
	int x = 2;

	return (functionPrimo(n, x));
}

#include "3-calc.h"

/**
 * op_add - function that
 * returns the sum of a and b.
 * @a: input intiger
 * @b: input intiger
 * Return: intiger if success
 */

int op_add(int a, int b)
{
	int result;

	result = a + b;

	return (result);
}

/**
 * op_sub - function that
 * returns the difference of a and b.
 * @a: input intiger
 * @b: input intiger
 * Return: intiger if success
 */

int op_sub(int a, int b)
{
	int result;

	result = a - b;

	return (result);
}

/**
 * op_mul - function that
 * returns the product of a and b.
 * @a: input intiger
 * @b: input intiger
 * Return: intiger if success
 */

int op_mul(int a, int b)
{
	int result;

	result = a * b;

	return (result);
}

/**
 * op_div - function that
 * returns the result of the division of a by b.
 * @a: input intiger
 * @b: input intiger
 * Return: intiger if success
 */

int op_div(int a, int b)
{
	int result;

	result = a / b;

	return (result);
}

/**
 * op_mod - function that
 * returns the remainder
 * of the division of a by b.
 * @a: input intiger
 * @b: input intiger
 * Return: intiger if success
 */

int op_mod(int a, int b)
{
	int result;

	result = a % b;

	return (result);
}

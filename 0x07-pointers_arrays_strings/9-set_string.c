#include "holberton.h"
#include <stdio.h>

/**
 * set_string - function that
 * sets the vale of a pointer to a char.
 * @s: double pointer
 * @to: pointer
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}

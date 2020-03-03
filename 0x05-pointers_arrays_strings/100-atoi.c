#include "holberton.h"

/**
 * _atoi - function that
 * convert a string to an integer.
 * @s: input is char
 * Return: intiger
 */

int _atoi(char *s)
{
	int j, k, sign = 1;
	unsigned int num = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == '-')
		{
			sign *= -1;
		}
		else if (s[j] >= '0' && s[j] <= '9')
		{
			break;
		}
	}

	for (k = j; s[k] >= '0' && s[k] <= '9'; k++)
	{
		num = num * 10 + s[k] - '0';
	}
	if (sign == -1)
	{
		num = num * (-1);
		return (num);
	}
	return (num);
}

#include "holberton.h"
/**
* _isalpha - checks for alphabetic character.
* @c: input is intiger
* Return: 1 if c  is a letter, lowercase or uppercase 0 if c is otherwise
*/

int _isalpha(int c)
{
	if (c >= 65 && c <= 122 && !(c >= 91 && c <= 96))
	{
		return (1);
	}
		else
		{
			return (0);
		}
}

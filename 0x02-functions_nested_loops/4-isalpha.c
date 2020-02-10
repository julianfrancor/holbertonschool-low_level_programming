#include "holberton.h"
/**
* _isalpha(int c)
* checks for alphabetic character.
* input is intiger
* return 1 if c  is a letter, lowercase or uppercase
* return 0 if c is otherwise
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

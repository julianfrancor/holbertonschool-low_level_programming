#include "holberton.h"
/**
* _islower(int c)
* checks for the lowercase
* input is intiger
* return 1 if c is lowercase
* return 0 if c is otherwise
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

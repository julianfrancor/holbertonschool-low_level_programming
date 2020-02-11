#include "holberton.h"
/**
* abs(int)
* function that computes the absolute value of an integer
* input is intiger
* Returns nothing
*
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

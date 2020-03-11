#include "function_pointers.h"

/**
* print_name - function that
* prints a name.
* @name: name of the person
* @f: pointer to function
* Return: Void
*/

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	{
		f(name);
	}
	return ();
}

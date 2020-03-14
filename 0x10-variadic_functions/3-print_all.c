#include "variadic_functions.h"

/**
 * print_char - print char
 * @c: list of chars
 * Return: void.
 */
void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_intiger - print intiger
 * @i: list of intigers
 * Return: void.
 */
void print_intiger(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_float - print floats
 * @f: list of floats
 * Return: void.
 */

void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_string - print string
 * @s: list of strings
 * Return: void.
 */

void print_string(va_list s)
{
	char *str;

	str = va_arg(s, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - function that
 * prints anything.
 * @format: is a list of types of arguments
 * passed to the function
 * between numbers
 * Return: Always 0.
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	char *separator = "";
	va_list valist;

	print_dog perro[] = {
		{"c", print_char},
		{"i", print_intiger},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
		};

	va_start(valist, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (perro[j].dog)
		{
			if (format[i] == *(perro[j].dog))
			{
				printf("%s", separator);
				perro[j].f(valist);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(valist);
}

#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
#include <stdio.h>

/**
 * struct print - Struct print
 * @dog: The operator
 * @f: The function associated
 */
typedef struct print
{
	char *dog;
	void (*f)(va_list);
} print_dog;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif

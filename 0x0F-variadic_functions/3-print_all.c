#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: a pointer to a list of types being fed into the function
 * Return: No Value
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0, len = 0;
	va_list elemtopr;
	typedef struct var
	{
		char *c;
		void (*prf)(char *);
	}var;
	var varray[] = {
		{'c', prf_char},
		{'i', prf_int},
		{'f', prf_float},
		{'s', prf_str}
		{NULL, NULL}
	}
	while (format[i])
	{
		if (format[i] == *(varray[j].c))
		{
			len++;
			i++;
		}
		j++;
	}
}

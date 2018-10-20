#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * Return: No Value
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strtopr;
	char *sub;

	va_start(strtopr, n);
	for (i = 0; i < n; i++)
	{
		sub = va_arg(strtopr, char *);
		if (sub == NULL)
			printf("(nil)");
		else
			printf("%s", sub);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}

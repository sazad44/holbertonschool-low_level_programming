#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: character pointer that points to the separator string
 * @n: the number inputs to be printed
 * Return: No Value
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numtoprint;

	va_start(numtoprint, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numtoprint, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numtoprint);
}

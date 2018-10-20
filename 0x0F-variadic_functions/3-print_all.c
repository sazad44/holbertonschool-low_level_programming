#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * prt_char - prints a character pointed to by a va_list
 * @ch: the character to be printed
 * Return: No Value
 */
void prt_char(va_list ch)
{
	printf("%s", va_arg(ch, char *));
}

/**
 * prt_int - prints an integer pointed to by a va_list
 * @in: the integer to be printed
 * Return: No Value
 */
void prt_int(va_list in)
{
	printf("%d", va_arg(in, int));
}

/**
 * prt_float - prints a float pointed to by a va_list
 * @fl: the float to be printed
 * Return: No Value
 */
void prt_float(va_list fl)
{
        printf("%f", va_arg(fl, double));
}

/**
 * prt_str - prints a string pointed to by a va_list
 * @st: the string to be printed
 * Return: No Value
 */
void prt_str(va_list st)
{
        printf("%s", va_arg(st, char *));
}

/**
 * print_all - prints anything
 * @format: a pointer to a list of types being fed into the function
 * Return: No Value
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	va_list elemtopr;
	typedef struct var
	{
		char *c;
		void (*prf)(va_list);
	}var;
	var varray[] = {
		{"c", prt_char},
		{"i", prt_int},
		{"f", prt_float},
		{"s", prt_str},
		{NULL, NULL}
	};
	void *sub;
	va_start(elemtopr, format);
	while (format[i])
	{
		sub = va_arg(elemtopr, void *);
		while (varray[j].c)
		{
			if (format[i] == *(varray[j].c))
				printf("hello");
				varray[j].prf(sub);
			j++;
		}
		if ((format + 1) != NULL)
			printf(", ");
		i++;
	}
	va_end(elemtopr);
	printf("\n");
}

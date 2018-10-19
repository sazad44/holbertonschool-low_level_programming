#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdlib.h>
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

void prt_char(char *ch)
{
	printf("%s", ch);
}

void prt_int(int in)
{
	printf("%d", in);
}

void prt_float(double *fl)
{
	printf("%f", fl);
}

void prt_str(char *st)
{
	printf("%s", st);
}
#endif

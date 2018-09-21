#include "holberton.h"

/**
 * print_number - print an integer input into the function
 *
 * Return: no value
 */
void print_number(int n)
{
	int first, flex;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else if (n == 0)
		_putchar('0');
	else
	{
		first = (n % 10);
		

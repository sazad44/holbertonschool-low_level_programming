#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: a string input to be reversed
 * Return: no value
 */
void print_rev(char *s)
{
	int n;

	n = 1;
	while (*s)
	{
		n++;
		s++;
	}
	while (n != 1)
	{
		s--;
		_putchar(*s);
		n--;
	}
	_putchar('\n');
}

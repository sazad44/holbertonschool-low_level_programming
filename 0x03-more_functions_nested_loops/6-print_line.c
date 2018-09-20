#include "holberton.h"

/**
 * print_line - print a line based on user input for length
 * @n: the length of the line specified by the user input
 * Return: no value
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}

#include "holberton.h"

/**
 * print_diagonal - Prints a diagonal line on the screen
 * @n: variable to define how many slashes are used for the line
 * Return: no value
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
}

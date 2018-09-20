#include "holberton.h"

/**
 * print_square - print a square of size determined by input
 * @size: the size of the square
 * Return: no value
 */
void print_square(int size)
{
	int n;
	int i;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (n = 1; n <= size; n++)
		{
			for (i = 1; i <= size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

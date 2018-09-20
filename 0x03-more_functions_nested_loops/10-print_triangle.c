#include "holberton.h"

/**
 * print_triangle - prints a triangle of certain size based on input
 * @size: size of triangle specified
 * Return: no value
 */
void print_triangle(int size)
{
	int n;
	int i;
	int j;
	int k;

	i = 2;
	if (size <= 0)
		_putchar('\n');
	else
	{
		for (n = 0; n < size; n++)
		{
			for (j = (size - i); j >= 0; j--)
			{
				_putchar(' ');
			}
			for (k = n; k >= 0; k--)
			{
				_putchar('#');
			}
			_putchar('\n');
			i++;
		}
	}
}

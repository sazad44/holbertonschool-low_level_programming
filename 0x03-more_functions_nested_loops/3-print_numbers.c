#include "holberton.h"

/**
 * print_numbers - print the numbers from 0 to 9 followed by a new line
 *
 * Return: No return value
 */
void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}

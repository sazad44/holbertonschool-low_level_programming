#include "holberton.h"

/**
 * print_most_numbers - print numbers from 0 to 9 excluding 2 and 4
 *
 * Return: no value
 */
void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n == '2' || n == '4')
			continue;
		_putchar(n);
	}
	_putchar('\n');
}

#include "holberton.h"

/**
 * more_numbers - Print numbers from 1 to 14 ten times
 *
 * Return: no value
 */
void more_numbers(void)
{
	int n;

	for (n = 0; n <= 14; n++)
	{
		if (n >= 10)
			_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	_putchar('\n');
}

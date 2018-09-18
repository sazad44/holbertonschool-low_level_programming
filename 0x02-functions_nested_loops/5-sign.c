#include "holberton.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: variable to store the numer in question
 * Return: 1, 0, or -1 to deisgnate positive negative or zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

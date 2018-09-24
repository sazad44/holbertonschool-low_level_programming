#include "holberton.h"

/**
 * print_number - print an integer input into the function
 * @n: the user input of the  number to be printed
 * Return: no value
 */
void print_number(int n)
{
	int i;

	i = 1;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else if (n == 0)
	{
		_putchar(n + '0');
		return;
	}
	while ((n / i) != 0)
	{
		i *= 10;
	}
	while (((n % i) != 0) && (n != i))
	{
		if (n == (i / 10))
		{
			i /= 10;
			_putchar((n / i) + '0');
			while (n != 1)
			{
				n /= 10;
				i /= 10;
				_putchar((i % n) + '0');
			}
			return;
		}
		else
		{
			i /= 10;
			_putchar((n / i) + '0');
			n = (n % i);
		}
	}
}

#include "holberton.h"

/**
 * print_number - print an integer input into the function
 * @n: the user input of the  number to be printed
 * Return: no value
 */
void print_number(int n)
{
	int i, first;

	i = 1;
	if (n < 0)
	{
		_putchar('-');
		n = -(n + 1);
	}
	else if (n == 0)
	{
		_putchar(n + '0');
		return;
	}
	else
		n = (n - 1);
	first = (n % 10);
	while ((n / i) > 9)
	{
		i *= 10;
	}
	while (i != 1)
	{
		if (n == i)
		{
			_putchar((n / i) + '0');
			while (n != 1)
			{
				n /= 10; i /= 10;
				_putchar((i % n) + '0');
			}
			return;
		}
		else
		{
			if (i > n)
				_putchar(((n / n) - 1) + '0');
			else
			{
				_putchar((n / i) + '0');
				n = (n % i);
			}
			i /= 10;
		}
	}
	_putchar((first + 1) + '0');
}

/**
 * print_equal - if number is equal to divider then a different route is taken
 * @n: an input from the print_number function to encourage continuity
 * @i: an input from the print_number function to encourage continuity
 * Return: no value
 *
void print_equal(int n, int i)
{
	if (n == i)
	{
		_putchar((n / i) + '0');
		while (n != 1)
		{
			n /= 10;
			i /= 10;
			_putchar((i % n) + '0');
		}
		return;
	}
}
*/

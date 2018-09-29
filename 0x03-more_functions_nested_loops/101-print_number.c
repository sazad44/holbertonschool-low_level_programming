#include "holberton.h"

/**
 * print_number - print an integer input into the function
 * @n: the user input of the  number to be printed
 * Return: no value
 */
void print_number(int n)
{
	int i = 1, first;

	if (n < 0)
	{
		_putchar('-');
		n = -(n + 1);
	}
	else
		n = (n - 1);
	first = (n % 10);
	while (((n + 1) / i) > 9)
		i *= 10;
	while (i != 1)
	{
		if ((n + 1) == i)
		{
			n += 1,	_putchar((n / i) + '0');
			while (i != 1)
				n /= 10, i /= 10, _putchar((i % n) + '0');
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
	if (first < 9)
		first += 1;
	else
		first = 0;
	_putchar((first) + '0');
}

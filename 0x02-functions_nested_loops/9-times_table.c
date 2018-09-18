#include "holberton.h"

/**
 * times_table - print times table from 0 to 9
 *
 * Return: No return
 */
void times_table(void)
{
	int n;
	int i;
	int x;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (i = 1; i <= 9; i++)
		{
			x = ((n * i) / 10);
			if (x == 0)
				_putchar(' ');
			else
				_putchar(x + '0');
			_putchar(((n * i) % 10) + '0');
			if (i < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
				_putchar('\n')
		}
	}
}

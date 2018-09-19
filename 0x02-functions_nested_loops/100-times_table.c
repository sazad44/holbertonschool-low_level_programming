#include "holberton.h"

/**
 * print_times_table - print times table from 0 to 9
 *
 * @n: the variable being input for table size
 * Return: No return
 */
void print_times_table(int n)
{
	int x;
	int y;
	int z;

	if (n > 0 && n < 15)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('0');
			for (y = 1; y <= n; y++)
			{
				z = (x * y);
				if (((z % 100) % 10) < 10)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (z >= 100)
				{
					_putchar((z / 100) + '0');
					_putchar(((z % 100) / 10) + '0');
					_putchar(((z % 100) % 10) + '0');
				}
				else if (z >= 10)
				{
					_putchar(' ');
					_putchar((z / 10) + '0');
					_putchar((z % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(z + '0');
				}
			}
			_putchar('\n');
		}
	}
}

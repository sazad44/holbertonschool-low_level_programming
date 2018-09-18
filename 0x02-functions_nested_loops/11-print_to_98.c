#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - print all numbers from input to 98
 *
 * @n: a number entered by user to begin counting
 * Return: No return
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (;  n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
	else if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
	else
	{
		printf("%d", n);
		putchar('\n');
	}
}

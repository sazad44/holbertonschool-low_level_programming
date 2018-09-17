#include "holberton.h"

/**
 * print_alphabet_x10 - Print the alphabet ten times lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int n;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (n = 'a'; n <= 'z'; n++)
			_putchar(n);
		_putchar('\n');
	}
}

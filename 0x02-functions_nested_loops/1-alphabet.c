#include "holberton.h"

/**
 * print_alphabet - Print the lowercase alphabet
 *
 * Return: No Return
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}

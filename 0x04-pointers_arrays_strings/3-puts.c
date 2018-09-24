#include "holberton.h"

/**
 * _puts - prints a string followed by a new line
 * @str: a string input into the function to be printed
 * Return: No value
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

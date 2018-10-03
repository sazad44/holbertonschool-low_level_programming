#include "holberton.h"

/**
 * _puts_recursion - prints a string with recursion
 * @s: the string to be printed
 * Return: no value
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
		_putchar('\n');
}

#include "holberton.h"

/**
 * _strlen_recursion - return the length of a string
 * @s: the string to be measured
 * Return: an integer that represents the length of the string
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s++)
		count += (1 + _strlen_recursion(s));
	return (count);
}

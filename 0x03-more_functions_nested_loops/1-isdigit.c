#include "holberton.h"

/**
 * _isdigit - Checks to see if character is a digit or not
 * @c: Character input from user
 * Return: 1 if digit and 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

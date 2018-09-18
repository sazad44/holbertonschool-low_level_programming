#include "holberton.h"

/**
 * _islower - Checks to see if input is lowercase or not
 *
 * @c: is a character variable holding ASCII values
 * Return: 1 if c is lowercase and 0 if not
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else
		return (0);
}

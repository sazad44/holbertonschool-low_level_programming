#include "holberton.h"

/**
 * _isupper - Checks if character is upper case or not
 * @c: character input to be checked for upper case status
 * Return: 1 if upper case and 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}

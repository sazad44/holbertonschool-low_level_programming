#include "holberton.h"

/**
 * _isalpha - checks to see if c is a letter, lowercase or uppercase
 *
 * @c: a variable holding the value of a character
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
		return (1);
	else
		return (0);
}

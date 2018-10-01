#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: the string to be searched through
 * @c: the character to find
 * Return: the string starting with the character found
 */
char *_strchr(char *s, char c)
{
	int i;
	char *p;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			p = (s + i);
			return (p);
		}
	}
	if (s[i] == c)
		p = (s + i);
	return (p);
}

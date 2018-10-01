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
	char *p = s;

	if (*s == '\0')
		return ("Segmentation fault (core dumped)");
	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			p = (s + i);
			return (p);
		}
	}
	p = (s + i);
	return ("Segmentation fault (core dumped)");
}

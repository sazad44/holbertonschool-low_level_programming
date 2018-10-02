#include "holberton.h"

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: the string to be searched
 * @accept: the input to search for
 * Return: the pointer to the sequence of data that matches
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;
	char *p;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				p = (s + i);
				return (p);
			}
		}
	}
	return ('\0');
}

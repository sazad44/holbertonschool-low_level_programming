#include "holberton.h"

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: the string to be searched
 * @accept: the input to search for
 * Return: the pointer to the sequence of data that matches
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
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
	p = (s + i);
	return (p);
}

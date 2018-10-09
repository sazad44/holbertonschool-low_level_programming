#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - concatenate two strings
 * @s1: the first string to be concatenated
 * @s2: the second string to be concatenated
 * Return: a pointer to the new memory holding the concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, sizes1 = _strlen(s1), sizes2 = _strlen(s2);

	p = malloc(sizeof(char) * (sizes1 + sizes2));
	if (p == NULL)
		return (NULL);
	for (i = 0; *s1; i++)
	{
		p[i] = *s1;
		s1++;
	}
	for (; *s2; i++)
	{
		p[i] = *s2;
		s2++;
	}
	return (p);
}

/**
 * strlen - measure a string
 * @s: string to be measured
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}

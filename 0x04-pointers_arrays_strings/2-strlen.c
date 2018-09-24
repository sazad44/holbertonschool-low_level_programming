#include "holberton.h"

/**
 * _strlen - outputs length of string
 * @s: a string whose length is to be counted
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

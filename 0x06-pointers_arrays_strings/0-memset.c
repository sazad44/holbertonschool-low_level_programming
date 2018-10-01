#include "holberton.h"

/**
 * _memset - set the memory taken up by a certain memory area with a byte
 * @s: the memory area held by a string to be replaced
 * @b: the byte to replace the memory area with
 * @n: the number of bytes to replace
 * Return: a string pointer to the newly modified string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

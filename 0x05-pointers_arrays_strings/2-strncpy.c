#include "holberton.h"

/**
 * _strncpy - copies one string to another up to a certain number of bytes
 * @dest: the destination string to copy a string to
 * @src: the source string to copy to dest
 * @n: the number of bytes to copy src up to
 * Return: the dest string to a pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[i])
		i++;
	if (i > n)
		i = n;
	for (; j < i; j++)
		dest[j] = src[j];
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}

#include "holberton.h"

/**
 * _strcat - concatenates two strings from input
 * @dest: the string to be concatenated to
 * @src: the string to concatenate to dest
 * Return: a character type pointer
 */
char *_strcat(char *dest, char *src)
{
	int n = 0, i = 0, j = 0;

	while (dest[n])
		n++;
	while (src[i])
		i++;
	for (; j < i; j++)
		dest[n + j] = src[j];
	return (dest);
}

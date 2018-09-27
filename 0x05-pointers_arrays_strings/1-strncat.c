#include "holberton.h"

/**
 * _strncat - concatenates two strings up to a certain number of bytes
 * @dest: the string to be concatenated to
 * @src: the string to append to the end of the concatenated string
 * @n: number of bytes of src to concatenate to dest
 * Return: string to character pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0, k = 0;

	while (dest[i])
		i++;
	while (src[j])
		j++;
	if (j > n)
		j = n;
	for (; k < j; k++)
		dest[i + k] = src[k];
	return (dest);
}

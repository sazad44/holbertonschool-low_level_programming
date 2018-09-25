#include "holberton.h"

/**
 * *_strcpy - copy string pointed to by second input to the first input
 * @dest: the buffer to have a string copied to
 * @src: the string to copy to dest
 * Return: the pointer dest's value
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0, i = 0;

	while (src[n])
	{
		n++;
	}
	n -= 1;
	while (i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

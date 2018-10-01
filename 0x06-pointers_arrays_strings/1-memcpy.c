#include "holberton.h"

/**
 * _memcpy - copies memory from one area to another
 * @dest: the memory pointer to copy memory to
 * @src: the memory pointer to copy memory from
 * @n: the number of bytes to copy from src to dest
 * Return: a string pointer to the modified memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

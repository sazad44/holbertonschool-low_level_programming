#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of specific chars
 * @size: the size of the array
 * @c: the character to initialize the array with
 * Return: a pointer to the intiialized array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);
	if (size == 0 || p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars initializing it with a specific char
 * @size: the size of the array
 * @c: the character to initialize the array with
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}

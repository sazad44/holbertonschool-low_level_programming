#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copies string to another newly allocated memory location
 * @str: the string to be copied into a new memory location
 * Return: a pointer to the memory address of the copied string
 */
char *_strdup(char *str)
{
	int size, i;
	char *p;

	if (str == NULL)
		return (NULL);
	for (size = 0; str[size]; size++)
		;
	p = malloc(sizeof(char) * size + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
		p[i] = str[i];
	return (p);
}

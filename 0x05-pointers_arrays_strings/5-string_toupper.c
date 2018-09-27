#include "holberton.h"

/**
 * string_toupper - change all lowercase letters in a string to uppercase
 * @p: the string to be modified to make every letter uppercase
 * Return: the modified string to the character pointer
 */
char *string_toupper(char *p)
{
	int i = 0, j = 0;

	while (p[i])
		i++;
	for (; j < i; j++)
	{
		if (p[j] >= 'a' && p[j] <= 'z')
			p[j] = (p[j] - 'a') + 'A';
	}
	return (p);
}

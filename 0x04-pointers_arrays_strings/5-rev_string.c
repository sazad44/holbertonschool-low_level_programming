#include "holberton.h"

/**
 * rev_string - reverse a string input into the function
 * @s: input to reverse
 * Return: no value
 */
void rev_string(char *s)
{
	int i, n;
	char first, temp;

	i = 0;
	while (*s)
	{
		n++;
		s++;
	}
	while (i < n)
	{
		first = s[i];
		temp = s[(n - 1)];
		s[(n - 1)] = first;
		s[i] = temp;
		i++;
		n--;
	}
}

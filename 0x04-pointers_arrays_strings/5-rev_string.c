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

	n = 0;
	i = 0;
	while (s[n])
	{
		n++;
	}
	n -= 1;
	while (i < n)
	{
		first = s[i];
		temp = s[n];
		s[n] = first;
		s[i] = temp;
		i++;
		n--;
	}
}

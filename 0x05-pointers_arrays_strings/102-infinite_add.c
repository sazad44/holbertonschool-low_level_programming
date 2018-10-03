#include "holberton.h"

/**
 * infinite_add - a function that adds two numbers
 * @n1: the first number to be added
 * @n2: the second number to be added
 * @r: the buffer the function will use to store the result
 * @size_r: the buffer size
 * Return: a character pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n, i, j, k, x = 1, y;

	for (n = 0; n1[n]; n++)
		;
	for (i = 0; n2[i]; i++)
		;
	if ((n > size_r) || (i > size_r))
		return (r);
	for (j = 0, k = 0; (j < n) || (k < i); j++, k++)
	{
		r[x] = ((n1[j] - '0') + (n2[k] - '0'));
		for (y = x; y > 0; y--)
		{
			if (r[y] > 9)
			{
				r[y] %= 10;
				r[y - 1]++;
			}
		}
		r[x] += '0';
		x++;
	}
	return (r);
}

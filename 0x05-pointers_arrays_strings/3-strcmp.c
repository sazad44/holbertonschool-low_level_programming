#include "holberton.h"

/**
 * _strcmp - compare two strings by length
 * @s1: first string to be compared
 * @s2: second string to compare to first string
 * Return: an integer that is pos neg or 0 depending on string comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, res = 0, k = 0;

	while (s1[i])
		i++;
	while (s2[j])
		j++;
	while (res == 0 && (k < i && k < j))
	{
		if (s1[k] != s2[k])
			res = s1[k] - s2[k];
		k++;
	}
	return (res);
}

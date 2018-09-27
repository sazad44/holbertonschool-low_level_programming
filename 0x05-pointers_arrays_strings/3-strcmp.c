#include "holberton.h"

/**
 * _strcmp - compare two strings by length
 * @s1: first string to be compared
 * @s2: second string to compare to first string
 * Return: an integer that is pos neg or 0 depending on string comparison
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, res = 15;

	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (i == j)
		res *= 0;
	else if (i < j)
		res *= -1;
	return (res);
}

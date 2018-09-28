#include "holberton.h"

/**
 * leet - converts a string into leet speak
 * @targ: the string to be converted into leet speak
 * Return: a string's pointer
 */
char *leet(char *targ)
{
	int i = 0, num[5] = {4, 3, 0, 1, 7}, j = 0;
	char alpha[10] = "AaEeOoLlTt";

	for (; targ[i]; i++)
	{
		for (j = 0; (targ[i] != alpha[j] && j < 10); j++)
			;
		if (targ[i] == alpha[j])
		{
			j /= 2;
			targ[i] = (num[j] + '0');
		}
	}
	return (targ);
}

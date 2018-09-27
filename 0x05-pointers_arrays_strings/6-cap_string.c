#include "holberton.h"

/**
 * cap_string - capitalize every word in a string
 * @targ: string input to have words of capitalized
 * Return: the string with capitalized words
 */
char *cap_string(char *targ)
{
	char *punc = " \t\n,;.!?\"(){}";
	int i = 0, j = 0, pup = 1, k = 0;

	for (; targ[i]; i++)
	for (; j < i; j++)
	{
		if (targ[j] >= 'A' && targ[j] <= 'Z')
			pup = 0;
		if ((targ[j] >= 'a' && targ[j] <= 'z') && pup == 1)
		{
			targ[j] = ((targ[j] - 'a') + 'A');
			pup = 0;
		}
		for (k = 0; punc[k]; k++)
		{
			if (targ[j] == punc[k])
			{
				pup = 1;
				if (!(targ[j + 1] <= 'z' && targ[j + 1] >= 'a'))
				    pup = 0;
			}
		}
	}
	return (targ);
}

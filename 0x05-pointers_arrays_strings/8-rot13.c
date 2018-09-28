#include "holberton.h"

/**
 * rot13 - encode a string using rot13 encryption
 * @targ: the target string to encrypt
 * Return: the encrypted string
 */
char *rot13(char *targ)
{
	int i = 0, j = 0;
	char alpha[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";

	for (; targ[i]; i++)
	{
		for (j = 0; targ[i] != alpha[j] && j < 52; j++)
			;
		if ((j < 26) && (targ[i] == alpha[j]))
			targ[i] = (targ[i] + 13);
		else if (targ[i] == alpha[j])
			targ[i] = (targ[i] - 13);
	}
	return (targ);
}

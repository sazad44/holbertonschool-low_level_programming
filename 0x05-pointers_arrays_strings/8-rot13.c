#include "holberton.h"

/**
 * rot13 - encode a string using rot13 encryption
 * @targ: the target string to encrypt
 * Return: the encrypted string
 */
char *rot13(char *targ)
{
	int i = 0, j = 0, neg = -1;
	char alpha[] = "ANBOCPDQERFSGTHUIVJWKXLYMZanbocpdqerfsgthuivjwkxlymz";

	for (i = 0; targ[i]; i++)
	{
		neg = 1;
		for (j = 0; targ[i] != alpha[j] && j < 52; j++)
			neg = (neg * -1);
		if (targ[i] == alpha[j])
			targ[i] = (targ[i] + (13 * neg));
	}
	return (targ);
}

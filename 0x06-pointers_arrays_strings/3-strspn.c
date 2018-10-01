#include "holberton.h"

/**
 * _strspn - acquires the length of a prefix substring
 * @s: the string to be analyzed and searched
 * @accept: a certain string of characters
 * Return: the number of bytes in the segment of s that match accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, res = 0, flag = 0;

	for (; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				res += 1;
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			break;
		flag = 0;
	}
	return (res);
}

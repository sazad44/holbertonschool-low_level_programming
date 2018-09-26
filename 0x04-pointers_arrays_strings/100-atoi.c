#include "holberton.h"

/**
 * _atoi - convert a string into an integer
 * @s: a string input to be converted into an integer
 * Return: an integer developed from the string
 */
int _atoi(char *s)
{
	unsigned int n = 0, neg = 0, isnum = 0, isalpha = 0, res = 0;

	neg = 0;
	while (s[n])
	{
		if (s[n] == '-')
		{
			neg += 1;
		}
		if (s[n] >= '0' && s[n] <= '9')
		{
			res = res * 10 + (s[n] - '0');
			isnum = 1;
		}
		if (!(s[n] >= '0' && s[n] <= '9'))
		{
			if (isnum == 1)
				isalpha = 1;
		}
		if (isnum == 1 && isalpha == 1)
			break;
		n++;
	}
	if (neg % 2 != 0)
		res = -res;
	return (res);
}

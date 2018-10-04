#include "holberton.h"

/**
 * is_palindrome - checks to see if a string is a palindrome
 * @s: the string to be checked for the attribute of palindrome
 * Return: 0 if not palindrome and 1 if it is
 */
int is_palindrome(char *s)
{
	int x = 0;

	return (is_pal_helper(s, x, measure(s)));
}

/**
 * is_pal_helper - helps determine if a string is a palindrome
 * @s: the string to be analyzed for the attribute of palindrome
 * @x: an integer to help traverse the string
 * @len: the length of the string
 * Return: an integer that indicates whether it is a palindrome or not, 1 or 0
 */
int is_pal_helper(char *s, int x, int len)
{
	if ((x / 2) != ((len - 1) / 2))
	{
		if (x == (len - 2) && (s[x + 1] == s[len - 1]))
			return (1);
		if (s[x] != s[(len - 1)])
			return (0);
	}
	else
		return (1);
	return (is_pal_helper(s, (x + 1), (len - 1)));
}

/**
 * measure - measure the length of a string
 * @s: the string to be measured
 * Return: the integer that represents the length of the string
 */
int measure(char *s)
{
	int count = 0;

	if (*s)
	{
		count = 1 + measure(s + 1);
	}
	return (count);
}

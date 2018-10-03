#include "holberton.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: the number to be square rooted
 * Return: the value of n square rooted
 */
int _sqrt_recursion(int n)
{
	int x = 1, ans;

	ans = _sqrt_helper(n, x);
	return (ans);
}

/**
 * _sqrt_helper - help return the square root of a number
 * @n: the number to be square rooted
 * @x: the eventual square root of n
 * Return: the square root of n
 */
int _sqrt_helper(int n, int x)
{
	if ((x * x) == n)
		return (x);
	else if ((x * x) > n)
		return (-1);
	return _sqrt_helper(n, (x + 1));
}

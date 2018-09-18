#include "holberton.h"

/**
 * _abs - Compute the absolute value of an integer
 *
 * @n: number inputed to be converted into its absolute value
 * Return: the number computed
 */
int _abs(int n)
{
	if (n < 0)
		n = (n * -2) + n;
	return (n);
}

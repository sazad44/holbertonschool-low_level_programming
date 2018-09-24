#include "holberton.h"

/**
 * swap_int - swaps the values of the two integers that are input
 * @a: one of the numbers inputted to be switched with another
 * @b: the other number input to be switched with a
 * Return: no value
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}

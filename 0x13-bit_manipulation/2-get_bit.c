#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number whose bit to get
 * @index: the index at which to return the value
 * Return: the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i, j, div;

	for (j = 0, div = 1; div <= n; j++, div *= 2)
		;
	for (i = 0; i < index; i++)
		n >>= 1;
	if (i > j - 1)
		return (-1);
	return (n & 1);
}

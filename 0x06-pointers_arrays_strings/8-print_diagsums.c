#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - print the two diagonal sums of a matrix
 * @a: the matrix fed into the function to be summed
 * @size: the size of the matrix
 * Return: no value
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < (size * size); i += (size + 1))
		sum1 += a[i];
	for (j = (size - 1); j < ((size * size) - 1); j += (size - 1))
		sum2 += a[j];
	printf("%d, %d\n", sum1, sum2);
}

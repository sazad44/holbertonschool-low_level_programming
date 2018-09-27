#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array to be reversed
 * @n: the number of elements of the array
 * Return: no value
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp = 0, j = 0;

	j = (n - 1);
	n = (n / 2);
	for (; i < n; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}
}

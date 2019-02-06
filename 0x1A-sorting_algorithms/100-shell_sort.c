#include "sort.h"

/**
 * shell_sort - sort a random array of integers with the shell sort method
 * @array: a pointer to the first element in the array
 * @size: the size of the array
 * Return: No Value
 */
void shell_sort(int *array, size_t size)
{
	size_t intvl = 1, i;

	if (!array || size < 2)
		return;
	for (i = 0; i < size; i = ((i * 3) + 1))
	{
		if (i < size)
			intvl = i;
	}
	for (; intvl >= 1; intvl = ((intvl - 1) / 3))
	{
		for (i = 0; i < size; i++)
		{
			shell_swap(array, i, size, intvl);
		}
		print_array(array, size);
	}
}

/**
 * shell_swap - swaps integers inside array with shell sort method
 * @array: a pointer to the first element of the array of integers
 * @idx: the index which the array starts at
 * @size: size of the array
 * @intvl: the interval at which to compare elements of the array
 * Return: No Value
 */
void shell_swap(int *array, size_t idx, size_t size, size_t intvl)
{
	int j, check;
	size_t i, tmp;

	for (i = idx; i < size; i += intvl)
	{
		for (j = i; j >= 0; j -= intvl)
		{
			check = j - intvl;
			if (array[check] > array[j])
			{
				tmp = array[j];
				if (check >= 0)
				{
					array[j] = array[check];
					array[check] = tmp;
				}
			}
		}
	}
}

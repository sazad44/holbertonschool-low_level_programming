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

	for (i = 0; (((i + 2) * 3) + 1) < size; i++)
		intvl = ((intvl * 3) + 1);
	for (; intvl >= 1; intvl = ((intvl - 1) / 3))
	{
		for (i = 0; i < size; i++)
		{
			shell_swap(array, i, size, intvl);
		}
		print_array(array, size);
	}
}

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

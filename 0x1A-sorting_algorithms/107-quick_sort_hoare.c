#include "sort.h"

/**
 * quick_sort_hoare - sorts random array of integers with quick Hoare sort
 * @array: pointer to first element of array
 * @size: size of the array
 * Return: No Value
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (!array)
		return;
	q_sort_hoare(array, 0, size - 1, size);
}

/**
 * q_sort_hoare - recursion function with more parameters to sort
 * @array: a pointer to the first element of the array
 * @low: bottom index of partition
 * @high: top index of partition
 * @size: size of the array
 */
void q_sort_hoare(int *array, int low, int high, size_t size)
{
	int piv;

	if (low < high)
	{
		piv = partition_hoare(array, low, high, size);
		q_sort_hoare(array, low, piv - 1, size);
		q_sort_hoare(array, piv, high, size);
	}
}

/**
 * partition_hoare - partitions the array
 * @array: a pointer to the beginning of the array
 * @low: starting point of array
 * @high: ending point of array
 * @size: size of the array
 * Return: pivot value
 */
int partition_hoare(int *array, int low, int high, size_t size)
{
	int i, j, tmp, piv;

	piv = array[high];
	i = low - 1;
	j = high + 1;
	while (1)
	{
		do {
			i++;
		} while (array[i] < piv);
		do {
			j--;
		} while (array[j] > piv);
		if (i < j)
		{
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			print_array(array, size);
		}
		else
			return (i);
	}
}

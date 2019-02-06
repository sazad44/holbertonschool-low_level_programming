#include "sort.h"

/**
 * quick_sort - sorts random array of integers with quick sort method
 * @array: pointer to first element of array
 * @size: size of the array
 * Return: No Value
 */
void quick_sort(int *array, size_t size)
{
	if (!array)
		return;
	q_sort(array, 0, size - 1, size);
}

/**
 * q_sort - recursion function with more parameters to sort
 * @array: a pointer to the first element of the array
 * @low: bottom index of partition
 * @high: top index of partition
 * @size: size of the array
 */
void q_sort(int *array, int low, int high, size_t size)
{
	int piv;

	if (low < high)
	{
		piv = partition(array, low, high, size);
		q_sort(array, low, piv - 1, size);
		q_sort(array, piv + 1, high, size);
	}
}

/**
 * partition - partitions the array
 * @array: a pointer to the beginning of the array
 * @low: starting point of array
 * @high: ending point of array
 * @size: size of the array
 * Return: pivot value
 */
int partition(int *array, int low, int high, size_t size)
{
	int i, j, tmp, piv;

	piv = array[high];
	for (j = low, i = low - 1; j < high; j++)
	{
		if (array[j] < piv)
		{
			i++;
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			if (array[i] != array[j])
				print_array(array, size);
		}
	}
	tmp = array[i + 1];
	array[i + 1] = piv;
	array[high] = tmp;
	if (array[high] != array[i + 1])
		print_array(array, size);
	return (i + 1);
}

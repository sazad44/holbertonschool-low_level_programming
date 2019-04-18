#include "search_algos.h"

/**
 * interpolation_search - uses interpolation search to find a specified value
 * @array: a pointer to the beginning of the array to be searched
 * @size: size of the array to be searched
 * @value: the value to be searched for
 * Return: the index of the value being searched
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	if (size == 0)
	{
		printf("Value checked array[%d] = %d\n", 0, 0);
		return (-1);
	}
	return (inp_srch(array, 0, size - 1, value));
}

/**
 * inp_srch - interpolation search algorithm in use
 * @array: a pointer to the beginning of the array to be searched
 * @low: the low index of the array to be searched
 * @high: the high index of the array to be searched
 * @value: the value to be searched for
 * Return: the index of the value found or -1 if not found
 */
int inp_srch(int *array, size_t low, size_t high, int value)
{
	size_t pos = 0;

	if (high == low && array[low] != value)
		return (-1);
	pos = low + (((double)(high - low) / (array[high] - array[low])) *
		     (value - array[low]));
	if (pos > high)
	{
		printf("Value checked array[%lu] is out of range\n", pos);
		return (-1);
	}
	printf("Value checked array[%lu] = %d\n", pos, array[pos]);
	if (array[pos] == value)
		return (pos);
	else if (array[pos] > value)
		return (inp_srch(array, low, pos - 1, value));
	return (inp_srch(array, pos + 1, high, value));
}

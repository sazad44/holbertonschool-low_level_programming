#include "search_algos.h"

/**
 * linear_search - searches for a value using the linear search algorithm
 * @array: a pointer to the array of integers to search
 * @size: the size of the array
 * @value: the value to search for in the array
 * Return: the index of the value in the array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx = 0;

	if (!array)
		return (-1);
	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}

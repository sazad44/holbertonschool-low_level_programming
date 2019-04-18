#include "search_algos.h"

/**
 * exponential_search - search for value with exponential search algorithm
 * @array: pointer to the beginning of the array to be searched
 * @size: size of the array being searched
 * @value: value being searched for
 * Return: index of found number
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t idx = 0, eStep = 1;

	if (!array)
		return (-1);
	for (idx = 0; eStep < size && size > 2; eStep *= 2)
	{
		if (array[eStep] > value)
			break;
		printf("Value checked array[%lu] = [%d]\n", eStep, array[eStep]);
		idx = eStep;
	}
	if (size == 0)
	{
		printf("Value found between indexes [0] and [0]\n");
		return (-1);
	}
	if (eStep > size - 1)
	{
		printf("Value found between indexes [%lu] and [%lu]\n", idx, size - 1);
		return (bin_srch(array, idx, eStep - 1, value));
	}
	else
	{
		printf("Value found between indexes [%lu] and [%lu]\n", idx, eStep);
		return (bin_srch(array, idx, eStep, value));
	}
	return (-1);
}

/**
 * bin_srch - binary search algorithm for when exp search finds range
 * @array: a pointer to the beginning of the arry to be searched
 * @start: starting index to search in algorithm
 * @end: ending index to search array in
 * @value: the value being searched for
 * Return: the index of the found value
 */
int bin_srch(int *array, size_t start, size_t end, int value)
{
	size_t half = 0, idx = 0;

	printf("Searching in array: %d", array[start]);
	for (idx = start + 1; idx <= end; idx++)
		printf(", %d", array[idx]);
	printf("\n");
	if (array[start] == value && start == end)
		return (start);
	else if (start == end)
		return (-1);
	half = start + ((end - start) / 2);
	if (array[half] == value)
		return (half);
	else if (array[half] > value)
		return (bin_srch(array, start, half - 1, value));
	return (bin_srch(array, half + 1, end, value));
}

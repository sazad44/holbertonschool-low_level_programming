#include "search_algos.h"

/**
 * binary_search - search for a value with the binary search algorithm
 * @array: a pointer to the array to search
 * @size: size of the array to search
 * @value: the value to search for
 * Return: the index where the value is located
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (bin_srch(array, 0, size - 1, value));
}

/**
 * bin_srch - does binary search to find index
 * @array: a pointer to the array to search
 * @start: starting index of array
 * @end: ending index of array
 * @value: the value to be matched against
 * Return: index of found value
 */
int bin_srch(int *array, size_t start, size_t end, int value)
{
	size_t idx = 0, half = 0;

	printf("Searching in array: %d", array[start]);
	for (idx = start + 1; idx <= end; idx++)
		printf(", %d", array[idx]);
	printf("\n");
	if (start == end && array[start] == value)
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

#include "search_algos.h"

/**
 * jump_search - uses jump search to find indicated value
 * @array: a pointer to the beginning of the array to be searched
 * @size: size of the array to be searched
 * @value: the value to be found
 * Return: the index where the value is located
 */
int jump_search(int *array, size_t size, int value)
{
	size_t idx = 0, jStep = sqrt(size), jSum = 0;

	if (!array || size == 0)
		return (-1);
	for (idx = 0; jStep <= size; jSum += jStep)
	{
		if (array[jSum] >= value || jSum > size)
			break;
		idx = jSum;
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", idx, jSum);
	while (idx <= jSum && idx < size)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
		idx++;
	}
	return (-1);
}

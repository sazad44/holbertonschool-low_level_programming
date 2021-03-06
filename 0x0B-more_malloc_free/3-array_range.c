#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the lowest and first number the array stores
 * @max: the largesst and last number the array stores
 * Return: an integer pointer to the beginning of the array
 */
int *array_range(int min, int max)
{
	int mem, i;
	int *ret;

	if (min > max)
		return (NULL);
	mem = max - min + 1;
	ret = malloc(sizeof(int) * mem);
	if (ret == NULL)
		return (NULL);
	for (i = 0; min <= max; min++, i++)
		ret[i] = min;
	return (ret);
}

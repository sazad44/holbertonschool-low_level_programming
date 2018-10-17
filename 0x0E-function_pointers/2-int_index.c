#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - write a function that searches for an integer
 * @array: the array to search for an integer in
 * @size: size of the array
 * @cmp: pointer to a function to compare values
 * Return: the index of the first elements that cmp doesnt return 0 for
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

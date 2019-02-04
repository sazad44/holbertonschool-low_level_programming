#include "sort.h"

/**
 * selection_sort - sorting a rand array of integers with the selection method
 * @array: a pointer to the first piece of data of the array
 * @size: the size of the array
 * Return: No Value
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min, tmp, flag = 0;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
				flag = 1;
			}
		}
		if (flag)
		{
			tmp = array[i];
			array[i] = array[min];
			array[min] = tmp;
			print_array(array, size);
			flag = 0;
		}
	}
}

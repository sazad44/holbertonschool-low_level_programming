#include "sort.h"

/**
 * bubble_sort - sorting a random array of integers with the bubble method
 * @array: a pointer to the first piece of data of the array
 * @size: the size of the array
 * Return: No Value
 */
void bubble_sort(int *array, size_t size)
{
	int i, flag = 1, new_size = size;

	while (flag)
	{
		flag = 0;
		for (i = 0; i < (new_size - 1); i++)
		{
			if (swap(array, i, size))
				flag = 1;
		}
		new_size -= 1;
	}
}

/**
 * swap - checks for unordered pairs and swaps to correct position
 * @array: a pointer to the first element of the array
 * @i: the position in the array being checked
 * @size: the size of the array
 * Return: Integer 1 if swap and 0 if not
 */
int swap(int *array, int i, size_t size)
{
	int tmp;

	if (array[i] > array[i + 1])
	{
		tmp = array[i];
		array[i] = array[i + 1];
		array[i + 1] = tmp;
		print_array(array, size);
		return (1);
	}
	return (0);
}

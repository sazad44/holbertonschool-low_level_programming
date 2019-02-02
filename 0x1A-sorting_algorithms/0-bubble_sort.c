#include "sort.h"

/**
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

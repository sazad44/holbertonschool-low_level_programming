#include "sort.h"

/**
 * quick_sort - sorts random array of integers with quick sort method
 * @array: pointer to first element of array
 * @size: size of the array
 * Return: No Value
 */
void quick_sort(int *array, size_t size)
{
	size_t i;
	int tmp, piv;

	if (size == 1)
		return;
	for (i = 0; 
	piv = partition(array, 0, size, size);
	quick_sort(array, piv);
	quick_sort(array + piv, size - piv);
}

/**
 * partition - partitions the array
 * @array: a pointer to the beginning of the array
 * @low: starting point of array
 * @high: ending point of array
 * @size: size of the array
 * Return: pivot value
 */
int partition(int *array, int low, int high, size_t size)
{
	size_t i, j;
	int piv;

	piv = array[high];
        for (j = low, i = low; j < (high - 1); j++)
        {
                if (array[j] <= piv)
                {
                        tmp = array[i];
                        array[i] = array[j];
                        array[j] = tmp;
                        i++;
                        print_array(array, size);
                }
        }
        tmp = array[i];
        array[i] = piv;
        array[j] = tmp;
        print_array(array, size);
	return (i);
}

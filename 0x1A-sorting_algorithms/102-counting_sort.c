#include "sort.h"

/**
 * counting_sort - sorting a random array of integers with the counting sort
 * @array: a pointer to the first piece of data of the array
 * @size: the size of the array
 * Return: No Value
 */
void counting_sort(int *array, size_t size)
{
	int index, k, *count_arr, *o_array;
	size_t i;

	if (!array || size < 2)
		return;
	k = array[0];
	for (i = 0; i < size; i++)
	{
		if (k < array[i])
			k = array[i];
	}
	count_arr = counting_array(array, k, size);
	print_array(count_arr, k + 1);
	o_array = malloc(sizeof(int) * size);
	if (!o_array)
		return;
	for (i = 0 ; i < size; i++)
	{
		index = array[i];
		o_array[count_arr[index] - 1] = index;
		count_arr[index]--;
	}
	for (i = 0; i < size; i++)
		array[i] = o_array[i];
	free(count_arr);
	free(o_array);
}

/**
 * counting_array - create a counting array
 * @array: a pointer to the first element of the array
 * @k: highest value in array
 * @size: size of array
 * Return: pointer to counting array
 */
int *counting_array(int *array, size_t k, size_t size)
{
	int *c_array;
	size_t i;

	c_array = malloc(sizeof(int) * (k + 1));
	if (!c_array)
		return (NULL);
	for (i = 0; i < k + 1; i++)
	{
		c_array[i] = 0;
	}
	for (i = 0; i < size; i++)
	{
		c_array[array[i]] += 1;
	}
	for (i = 0; i < k; i++)
	{
		c_array[i + 1] += c_array[i];
	}
	return (c_array);
}

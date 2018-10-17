#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes functions with parameters provided by an array
 * @array: the array of paramters
 * @size: the size of the array
 * @action: the pointer to a function to be used
 * Return: No Value
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}

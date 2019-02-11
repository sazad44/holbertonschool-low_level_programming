#include "sort.h"

/**
 * merge_sort - sorts random array of integers with merge method
 * @array: a pointer to the first element of the array
 * @size: size of the array
 * Return: No Value
 */
void merge_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	top_down_merge_sort(array, 0, size);
}

/**
 * top_down_merge_sort - helper function to increase parameters of merge_sort
 * @a: a pointer to the first element of the array
 * @beg: index to the beginning of the sublist
 * @end: index to the end of the sublist
 * Return: No Value
 */
void top_down_merge_sort(int *a, int beg, unsigned int end)
{
	unsigned int split = 0;

	if ((end - beg) < 2)
		return;
	split = ((beg + end) / 2);
	top_down_merge_sort(a, beg, split);
	top_down_merge_sort(a, split, end);
	top_down_merge(a, beg, split, end);
}

/**
 * top_down_merge - merges two sublists
 * @a: pointer to the first element of the array
 * @beg: beginning index of sublist
 * @split: index to middle element of sublists
 * @end: index to end of sublist
 * Return: No Value
 */
void top_down_merge(int *a, int beg, unsigned int split, unsigned int end)
{
	unsigned int i, j, k;

	printf("Merging...\n[left]: ");
	for (i = beg; i < split; i++)
	{
		if (i > (unsigned int)beg)
			printf(", ");
		printf("%d", a[i]);
	}
	printf("\n[right]: ");
	for (i = split; i < end; i++)
	{
		if (i > split)
			printf(", ");
		printf("%d", a[i]);
	}
	printf("\n[Done]: ");
	for (i = beg, j = split; j < end; i++, j++)
	{
		if (i < split)
		{
			if (a[i] > a[j])
				merge_swap(a + i, a + j), j -= 1; }
		else
		{
			if (i > split)
				i = beg; }
		for (k = beg; k < end; k++)
			if (k > (unsigned int)beg && a[k] < a[k - 1])
				merge_swap(a + k, a + (k - 1));
	}
	if (a[split] < a[split - 1])
		merge_swap(a + split, a + (split - 1));
	for (i = beg; i < end; i++)
	{
		if (i > (unsigned int)beg)
			printf(", ");
		printf("%d", a[i]);
	}
	printf("\n");
}

/**
 * merge_swap - swaps two elements in an array
 * @a: pointer to element to be swapped
 * @b: pointer to element to be swapped
 * Return: No Value
 */
void merge_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

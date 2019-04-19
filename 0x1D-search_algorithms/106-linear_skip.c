#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: a pointer to the head node of the linked list
 * @value: the value being searched for
 * Return: The pointer to the first node where value was found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	size_t size = 0, outIdx = 0;
	skiplist_t *tmpList = NULL, *idxList = list;

	if (!list)
		return (NULL);
	for (tmpList = list; tmpList->next; tmpList = tmpList->next)
		size++;
	for (tmpList = list->express; tmpList; tmpList = tmpList->express)
	{
		printf("Value checked at index [%lu] = [%d]\n", tmpList->index, tmpList->n);
		if (tmpList->n >= value)
			break;
		idxList = tmpList;
	}
	if (tmpList)
		outIdx = tmpList->index;
	else
		outIdx = size;
	printf("Value found between indexes [%lu] and [%lu]\n", idxList->index,
	       outIdx);
	for (; idxList && (idxList->index <= outIdx); idxList = idxList->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", idxList->index, idxList->n);
		if (idxList->n == value)
			return (idxList);
	}
	return (NULL);
}

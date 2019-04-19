#include "search_algos.h"

/**
 * jump_list - uses jump search with a singly linked list
 * @list: a pointer to the head node of the linked list
 * @size: size of the linked list
 * @value: the value to be found
 * Return: a pointer to the first node where value is found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *tmpList = NULL, *idxList = NULL;
	size_t jStep = sqrt(size), outIdx = 0;

	if (!list)
		return (NULL);
	for (tmpList = list; tmpList->index < jStep; tmpList = tmpList->next)
		;
	for (idxList = list; tmpList; tmpList = tmpList->next)
	{
		if (tmpList->index % jStep == 0 || tmpList->index == size - 1)
			printf("Value checked at index [%lu] = [%d]\n", tmpList->index, tmpList->n);
		if (tmpList->n >= value && (tmpList->index % jStep) == 0)
			break;
		if (tmpList->index % jStep == 0)
			idxList = tmpList;
	}
	if (tmpList)
		outIdx = tmpList->index;
	else
		outIdx = size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n",
	       idxList->index, outIdx);
	for (; idxList && idxList->index <= outIdx; idxList = idxList->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", idxList->index, idxList->n);
		if (idxList->n == value)
			return (idxList);
	}
	return (NULL);
}

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
	size_t jStep = sqrt(size), jSum = 0, idx = 0;

	if (!list)
		return (NULL);
	for (tmpList = list, jSum = 0; jSum < jStep; jSum++)
		tmpList = tmpList->next;
	for (idxList = list; jSum < size; idxList = idxList->next)
	{
		jSum++;
		tmpList = tmpList->next;
		if (jSum % jStep == 0)
			printf("Value checked array [%lu] = [%d]\n", jSum, tmpList->n);
		if ((jSum + jStep) >= size)
			break;
	}
	if (jSum > size - 1)
		jSum = size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", jSum - jStep, jSum);
	for (idx = jSum - jStep; idx < jSum; idx++, idxList = idxList->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", idx, idxList->n);
		if (idxList->n == value)
			return (idxList);
	}
	return (NULL);
}

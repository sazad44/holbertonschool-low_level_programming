#include "lists.h"

/**
 * dlistint_len - count the number of nodes in a doubly linked list
 * @h: a pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	if (h == NULL)
		return (0);
	for (i = 0; h; i++, h = h->next)
		;
	return (i);
}

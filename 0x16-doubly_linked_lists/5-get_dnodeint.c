#include "lists.h"

/**
 * get_dnodeint_at_index - returns nth node of a doubly linked list
 * @head: a pointer to the first node in the list
 * @index: the index of the node to be printed and returned
 * Return: the address of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i != index && head; i++, head = head->next)
		;
	if (head == NULL)
		return (NULL);
	return (head);
}

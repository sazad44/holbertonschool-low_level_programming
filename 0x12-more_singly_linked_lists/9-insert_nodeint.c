#include "lists.h"

/**
 * insert_nodint_at_index - inserts a new node at a given position
 * @head: a pointer to the pointer to the first struct in the linked list
 * @idx: the index at which the new element has to be added
 * @n: the piece of data to put into the new node
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp, *temp2;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	for (i = 0, temp = *head; i < idx - 1; i++, temp = temp->next)
		;
	if (idx > i + 1)
		return (NULL);
	temp2 = temp->next;
	temp->next = new;
	new->next = temp2;
	return (new);
}

#include "lists.h"

/**
 * add_dnodeint_end - add a new node to the end of a doubly linked list
 * @head: a pointer to a pointer to the first node in the list
 * @n: the number value to be put into the new node
 * Return: the address of the new element or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *trav;
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		for (trav = *head; trav->next; trav = trav->next)
			;
		trav->next = new;
		new->prev = trav;
	}
	return (new);
}

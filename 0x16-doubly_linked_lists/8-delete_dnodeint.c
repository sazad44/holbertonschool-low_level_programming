#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a specified index
 * @head: a pointer to a pointer to the first node in the list
 * @index: the index at which to remove a node
 * Return: 1 for success and -1 for failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *tmp;

	if (head == NULL || *head == NULL)
		return (-1);
	for (i = 0, tmp = *head; i != index && tmp; i++, tmp = tmp->next)
		;
	if (tmp)
	{
		if (index == 0)
		{
			*head = (*head)->next;
			if (*head)
				(*head)->prev = NULL;
			free(tmp);
		}
		else
		{
			tmp->prev->next = tmp->next;
			if (tmp->next)
				tmp->next->prev = tmp->prev;
			free(tmp);
		}
		return (1);
	}
	return (-1);
}

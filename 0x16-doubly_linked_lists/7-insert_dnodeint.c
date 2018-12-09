#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at a certain index
 * @h: a pointer to a pointer to the first node in the list
 * @idx: the index at which a node is to be inserted
 * @n: the value to be assigned to the new node
 * Return: the address of the new node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new, *tmp, *tmp1;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*h == NULL && idx != 0)
	{
		free(new);
		return (NULL);
	}
	else if (idx == 0)
	{
		free(new);
		return (add_dnodeint(h, n));
	}
	else
	{
		for (i = 1, tmp = *h; (i != idx) && tmp; i++, tmp = tmp->next)
			;
		if (tmp == NULL)
		{
			free(new);
			return (NULL);
		}
		else
		{
			tmp1 = tmp->next;
			tmp->next = new;
			new->prev = tmp, new->next = tmp1;
			if (tmp1)
				tmp1->prev = new;
		}
	}
	return (new);
}

#include "sort.h"

/**
 * insertion_sort_list - sort a random array of integers with insertion
 * @list: a pointer to the head of the linked list of integers
 * Return: No Value
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp = NULL, *curr = NULL, *stmpp = NULL;

	if (!list)
		return;
	for (curr = *list; curr; curr = curr->next)
	{
		for (tmp = curr->prev; tmp; tmp = tmp->prev)
		{
			if (curr->n < tmp->n)
			{
				if (curr->next)
					curr->next->prev = tmp;
				tmp->next = curr->next;
				stmpp = tmp->prev;
				tmp->prev = curr;
				curr->next = tmp;
				curr->prev = stmpp;
				if (stmpp)
					stmpp->next = curr;
				else
					*list = curr;
				tmp = tmp->prev;
			}
			else
				break;
			print_list(*list);
		}
	}
}

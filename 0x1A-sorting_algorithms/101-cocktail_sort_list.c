#include "sort.h"

/**
 * cocktail_sort_list - sort a random array of integers using cocktail method
 * @list: a pointer to the first node of the linked list
 * Return: No Value
 */
void cocktail_sort_list(listint_t **list)
{
	unsigned char flag = 1;
	listint_t *curr, *tmp = NULL, *ptmp = NULL, *curr2;

	if (!list)
		return;
	while (flag)
	{
		flag = 0;
		for (curr = *list; curr; curr = curr->next)
		{
			if (curr->prev && (curr->prev->n > curr->n))
			{
				flag = 1;
				tmp = curr->prev;
				if (tmp)
					ptmp = tmp->prev;
				if (curr->next)
					curr->next->prev = tmp;
				tmp->next = curr->next;
				tmp->prev = curr;
				curr->next = tmp;
				curr->prev = ptmp;
				ptmp->next = curr;
				curr = tmp;
				print_list(*list);
			}
			if (curr->next == NULL)
				curr2 = curr;
		}
		for (; curr2; curr2 = curr2->prev)
		{
			if (curr2->next && (curr2->next->n < curr2->n))
			{
				flag = 1;
				tmp = curr2->next;
				if (tmp)
					ptmp = tmp->next;
				if (curr2->prev)
					curr2->prev->next = tmp;
				tmp->prev = curr2->prev;
				tmp->next = curr2;
				curr2->prev = tmp;
				curr2->next = ptmp;
				ptmp->prev = curr2;
				curr2 = tmp;
				if (curr2->prev == NULL)
					*list = curr2;
				print_list(*list);
			}
		}
	}
}

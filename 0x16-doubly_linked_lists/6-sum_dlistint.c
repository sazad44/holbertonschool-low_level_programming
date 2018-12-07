#include "lists.h"

/**
 * sum_dlistint - sums the data of a doubly linked list of integers
 * @head: a ponter to the first node of the list
 * Return: the sum of the data or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	for (sum = 0; head; sum += head->n, head = head->next)
		;
	return (sum);
}

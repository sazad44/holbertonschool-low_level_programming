#include "lists.h"

/**
 * print_listint_safe - prints the elements of a linked list of structures
 * @h: the pointer to the first element of the list
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int num;

	if (h == NULL)
		return (0);
	for (num = 0; h; num++)
	{
		printf("[%p] %d\n", head->next, head->n);
		head = head->next;
	}
	return (num);
}

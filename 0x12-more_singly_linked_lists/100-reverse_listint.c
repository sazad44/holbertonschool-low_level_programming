#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: the pointer to a pointer to the first struct in the linked list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;

	for (; *head;)
	{
		if (prev == NULL)
		{
			prev = *head;
			prev->next = NULL;
			*head = (*head)->next;
		}
		else
		{
			prev = *head;
			*head = (*head)->next;
}

#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a certain index in a linked list
 * @head: a pointer to a pointer to the first struct in a linked list
 * @index: the index at which to delete the node
 * Return: 1 if SUCCESS or -1 if FAIL
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int ret = -1;
	unsigned int i;
	listint_t *temp, *temp2;

	if (head == NULL)
		return (ret);
	ret = 1;
	if (index == 0)
	{
		temp = *head;
		if (*head != NULL)
		{
			*head = (*head)->next;
			free(temp);
		}
	}
	else
	{
		for (i = 0, temp = *head; i < index - 1; i++, temp = temp->next)
			;
		temp2 = temp;
		temp = temp->next;
		temp2->next = temp->next;
		free(temp);
	}
	return (ret);
}

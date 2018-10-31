#include "lists.h"

/**
 * print_listint_safe - prints the elements of a linked list of structures
 * @h: the pointer to the first element of the list
 * Return: the number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int num;
	const listint_t *temp = head, *temp2 = head, *temp3 = head;

	if (head == NULL)
		return (0);
	for (num = 0; head; num++)
	{
		temp2 = temp2->next;
		while (temp2)
		{
			if (temp2 == temp)
			{
				temp2 = temp3;
				while (temp != temp2)
				{
					temp2 = temp2->next;
					temp2 = temp2->next;
					temp = temp->next;
				}
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (num);
			}
			temp2 = temp2->next;
			if (temp2)
				temp2 = temp2->next;
			temp = temp->next;
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	return (num);
}

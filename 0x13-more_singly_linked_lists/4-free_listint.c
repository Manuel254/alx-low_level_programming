#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to head node
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		head = temp->next;
		free(temp);
		temp = head;
	}
}

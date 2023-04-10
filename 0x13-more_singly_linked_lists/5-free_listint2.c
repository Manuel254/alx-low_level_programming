#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to head node
 */
void free_listint2(listint_t **head)
{
	if (*head == NULL)
		return;

	listint_t *temp = *head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
}

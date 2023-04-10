#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to head node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current)
	}

	*head = NULL;
}

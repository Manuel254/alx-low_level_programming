#include "lists.h"

/**
 * free_dlistint - frees a dlistint list
 * @head: pointer to head node
 */
void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		dlistint_t *ptr = head;
		head = head->next;
		free(ptr);
	}
}

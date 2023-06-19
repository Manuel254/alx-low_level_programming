#include "lists.h"

/**
 * pop_listint - deletes thehead node of a linked list
 * @head: pointer to head node
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	temp = *head;

	if (temp == NULL)
		return (0);

	*head = temp->next;
	data = temp->n;
	free(head);

	return (data);
}

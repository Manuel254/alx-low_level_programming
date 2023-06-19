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

	if (head == NULL)
		return (0);

	data = (*head)->n;
	free_listint2(head);
	
	return (data);
}

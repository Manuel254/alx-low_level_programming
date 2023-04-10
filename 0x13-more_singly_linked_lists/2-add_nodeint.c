#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of linked list
 * @head: pointer to head node
 * @n: value of node to be added
 *
 * Return: address of new element else NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;

	*head = temp;

	return (temp);
}

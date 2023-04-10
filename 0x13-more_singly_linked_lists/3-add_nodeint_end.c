#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of linked list
 * @head: pointer to head node
 * @n: value of node to be added
 *
 * Return: address of new element else NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;
	newNode = malloc(sizeof(listint_t));
	temp = *head;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = newNode;
	}

	return (newNode);
}

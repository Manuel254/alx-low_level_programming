#include "lists.h"

/**
 * sum_listint - sums all the data of a linked list
 * @head: pointer to first node
 *
 * Return: number of nodes
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

#include "lists.h"

/**
 * add_node_end - adds a new node at end of list
 * @head: pointer to pointer of structure
 * @str: string to be stored
 *
 * Return: address of new element else NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *new_str = strdup(str);
	list_t *ptr = *head;
	list_t *temp;

	temp = malloc(sizeof(list_t));
	temp->str = new_str;
	temp->len = strlen(new_str);
	temp->next = NULL;

	if (temp == NULL)
	{
		return (NULL);
	}
	else
	{
		if (*head == NULL)
		{
			*head = temp;
		}
		else
		{
			while (ptr->next != NULL)
				ptr = ptr->next;
			ptr->next = temp;
		}
		return (temp);
	}
}

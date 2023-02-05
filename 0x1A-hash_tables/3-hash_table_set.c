#include "hash_tables.h"

/**
 * hash_table_set - adds an element to hash table
 * @ht: pointer to hash table
 * @key: key to be stored
 * @value: value to be stored
 *
 * Return: 1 if successful else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node;

	if (key == NULL)
	{
		return (0);
	}
	else
	{
		node = malloc(sizeof(hash_node_t));

		if(node == NULL)
			return (0);

		node->key = strdup(key);
		node->value = strdup(value);
		node->next = NULL;	
	}

	idx = key_index((unsigned const char *)key, ht->size);

	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = node;
	}
	else
	{
		node->next = ht->array[idx];
		ht->array[idx] = node;
	}
	return (1);
}

#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table and returns a pointer
 * @size: size of array
 *
 * Return: pointer to hash table else NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
		return (NULL);

	hash_table->size = size;
	hash_table->array = (hash_node_t **)malloc(sizeof(hash_node_t) * size);
	
	if (hash_table->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;

	return (hash_table);
}

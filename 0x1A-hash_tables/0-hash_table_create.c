#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table and returns a pointer
 * @size: size of array
 *
 * Return: pointer to hash table else NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = (hash_table_t *)malloc(sizeof(hash_table_t));

	if (hash_table == NULL || !size)
		return (NULL);

	hash_table->size = size;
	return (hash_table);
}

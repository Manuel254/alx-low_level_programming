#include "hash_tables.h"

/**
 * key_index - generates index in array where key/value pair will be stored
 * @key: key to generate index
 * @size: size of array
 *
 * Return: index where key/value pair will be stored in array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int long index;
	index = hash_djb2(key) % size;

	return (index);
}

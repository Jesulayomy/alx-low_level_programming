#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the table to create
 *
 * Return: a pointer to the created table or null
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hasht;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	hasht = malloc(sizeof(hash_table_t));
	if (hasht == NULL)
		return (NULL);

	hasht->size = size;
	hasht->array = malloc(sizeof(hash_node_t *) * size);
	if (hasht->array == NULL)
	{
		free(hasht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		hasht->array[i] = NULL;

	return (hasht);
}

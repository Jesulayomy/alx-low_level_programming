#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: of the hash table array to be created
 *
 * Return: a pointer to the table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;
	unsigned long int idx;

	if (size == 0)
		return (NULL);

	sht = malloc(sizeof(shash_table_t));
	if (sht == NULL)
		return (NULL);

	sht->size = size;
	sht->array = malloc(sizeof(shash_node_t) * size);
	if (sht->array == NULL)
	{
		free(sht);
		return (NULL);
	}

	for (idx = 0; idx < size; idx++)
		sht->array[idx] = NULL;

	sht->shead = NULL;
	sht->stail = NULL;

	return (sht);
}

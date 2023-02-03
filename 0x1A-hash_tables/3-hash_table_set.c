#include "hash_tables.h"

/**
 * hash_table_set - sets a key-value pair in the hash table
 * @ht: the table to add
 * @key: key and its
 * @value: value
 *
 * Return: 1 if successful or 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new;

	if (key[0] == '\0' || key == NULL)
		return (0);
	if (value == NULL)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = malloc(sizeof(value) + 1);
		ht->array[idx]->key = strdup(key);
		ht->array[idx]->value = strdup(value);
		ht->array[idx]->next = NULL;
	}
	else
	{
		new = malloc(sizeof(value) + 1);
		new->key = strdup(key);
		new->value = strdup(value);
		new->next = ht->array[idx];
		ht->array[idx] = new;
	}

	return (1);
}

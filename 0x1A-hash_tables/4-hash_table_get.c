#include "hash_tables.h"

/**
 * hash_table_get - gets a value associated with a key
 * @ht: the hashtable to search
 * @key: the key whose value is to be retrieved
 * Return: a char pointer to the value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *temp;

	if (!ht || !key)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	temp = ht->array[idx];
	if (temp == NULL)
		return (NULL);
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}

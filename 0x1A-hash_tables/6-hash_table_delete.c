#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table and frees all its memory
 * @ht: hash table  to delete
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;

	for (idx = 0; idx < ht->size; idx++)
	{
		free_list(ht->array[idx]);
	}
	free(ht->array);
	free(ht);
}

void free_list(hash_node_t *head)
{
	hash_node_t *temp = head, *second;

	if (head)
	{
		while (temp->next)
		{
			second = temp;
			temp = temp->next;
			free(second->key);
			free(second->value);
			free(second);
		}

		free(temp->key);
		free(temp->value);
		free(temp);
	}
}

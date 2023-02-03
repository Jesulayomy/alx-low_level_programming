#include "hash_tables.h"

/**
 * hash_table_print - prints the contents of a
 * hash table as a dictionary
 * @ht: the hashtable
 * Return: nothing m8
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int idx, rem;
	int check = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (idx = 0; idx < ht->size; idx++)
	{
		temp = ht->array[idx];
		if (temp == NULL)
			continue;
		for (rem = idx + 1, check = 0; rem < ht->size; rem++)
		{
			if (ht->array[rem] != NULL)
			{
				check = 1;
				break;
			}
		}
		while (temp)
		{
			printf("\'%s\': \'%s\'", temp->key, temp->value);
			if (temp->next != NULL)
				printf(", ");
			else if (temp->next == NULL && check == 1)
				printf(", ");
			temp = temp->next;
		}
	}
	printf("}\n");
}

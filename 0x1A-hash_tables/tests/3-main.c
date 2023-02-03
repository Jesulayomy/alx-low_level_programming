#include "hash_tables.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always EXIT_SUCCESS.
 *     */
int main(void)
{
	hash_table_t *ht;
	unsigned long int idx;
	unsigned long int idx2;
	char *key = "betty";
	char *key2 = "aftty";

	ht = hash_table_create(1024);
	if (ht != NULL)
		printf("Created ht successfully\n");

	idx = key_index((unsigned char *)key, 1024);
	idx2 = key_index((unsigned char *)key2, 1024);

	hash_table_set(ht, key, "cool");
	hash_table_set(ht, key2, "cool2");

	printf("Key: %s\nValue: %s\n", ht->array[idx]->key, ht->array[idx]->value);
	printf("Key: %s\nValue: %s\n", ht->array[idx2]->key, ht->array[idx2]->value);

	hash_table_set(ht, key2, "cool3");

	printf("Key: %s\nValue: %s\n", ht->array[idx]->key, ht->array[idx]->value);
	printf("Key: %s\nValue: %s\n", ht->array[idx2]->key, ht->array[idx2]->value);

	return (EXIT_SUCCESS);
}

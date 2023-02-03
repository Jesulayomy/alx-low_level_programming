#include "hash_tables.h"

/**
 * key_index - thenidex of the key according
 * to the size and djb2 algorithm
 * @key: the keyword to encode
 * @size: the size of the array's hash
 *
 * Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_no;

	hash_no = hash_djb2(key);

	return (hash_no % size);
}

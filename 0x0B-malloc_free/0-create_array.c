#include "main.h"

/**
 * create_array - creates an array of characters
 * @size: the size of the array
 * @c: the character to initialize with
 *
 * Return: a pointer to the array or null
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}

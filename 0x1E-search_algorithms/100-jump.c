#include "search_algos.h"

/**
 * jump_search - algorithm to find a value in a sorted array
 * @array: a pointer to the first elementg to search
 * @size: of the array to consider
 * @value: to search for
 *
 * Return: the index of the value og -1 if it does not exist
 */
int jump_search(int *array, size_t size, int value)
{
	size_t a = 0;
	size_t i;
	int block = sqrt(size);

	if (array == NULL)
		return (-1);

	for (i = 0; array[i] < value && i < size; i = i + block)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	a = i - block;
	printf("Value found between indexes [%ld] and [%ld]\n", a, i);
	for (; a <= i && a < size; a++)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
	}

	return (-1);
}

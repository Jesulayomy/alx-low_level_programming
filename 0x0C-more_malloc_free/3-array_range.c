#include "main.h"

/**
 * array_range - creates an array of ints
 * @min: the least
 * @max: the most
 *
 * Return: the pointer at successful exit
 */
int *array_range(int min, int max)
{
	int *arr, i, l = 0, s = min;

	if (min > max)
		return (NULL);

	while (s <= max)
	{
		l++;
		s++;
	}

	arr = malloc(l * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);
}

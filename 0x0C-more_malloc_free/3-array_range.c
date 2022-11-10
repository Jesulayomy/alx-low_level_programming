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
	int *arr;
	int i, l, s = min;

	if (min > max)
		return (NULL);

	for (l = 0; s <= max; l++, s++)
		;

	arr = malloc(sizeof(int) * (l));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= l; i++, min++)
		arr[i] = min;

	return (arr);
}

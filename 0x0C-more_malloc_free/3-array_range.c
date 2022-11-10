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
	int i;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (min < 0)
	{
		for (i = 0; i <= max; i++)
			arr[i] = min + i;
	}
	else
	{
		for (i = 0; i <= max; i++)
			arr[i] = min + i;
	}

	return (arr);
}

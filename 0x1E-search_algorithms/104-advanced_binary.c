#include "search_algos.h"

/**
 * bin_search - binarysearch algorithm but advanced
 * @array: the array to search for the string
 * @begin: where to begin looking
 * @end: where t ostop looking
 * @value: the value to find
 *
 * Return: avlue's index if element is found else -1.
 */
int bin_search(int *array, size_t begin, size_t end, int value)
{
	size_t i, middle = (begin + end) / 2;
	int num, check;

	if (begin > end)
		return (-1);

	printf("Searching in array: ");
	for (i = begin; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i != end)
			printf(", ");
	}
	printf("\n");
	num = array[middle];
	if (num == value)
	{
		if (middle == 0 || array[middle - 1] != value)
			return (middle);
		check = bin_search(array, begin, middle, value);
		return (check);
	}
	else if (num > value)
		return (bin_search(array, begin, middle - 1, value));
	else
		return (bin_search(array, middle + 1, end, value));
}

/**
 * advanced_binary - searches for a value in an array using advanced bin search
 * @array: to search
 * @size: the size of the array
 * @value: the value to search the array for
 *
 * Return: index if the value found or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (bin_search(array, 0, size - 1, value));
}


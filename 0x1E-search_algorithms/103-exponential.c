#include "search_algos.h"

/**
 * repeat_search - uses recursion to find a value
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 *
 * Return: index of the number  or -1 if not found or arr empty
 */
int repeat_search(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);
	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);
	printf("\n");

	if (mid && size % 2 == 0)
		mid--;
	if (value == array[mid])
		return ((int)mid);
	if (value < array[mid])
		return (repeat_search(array, mid, value));
	mid++;

	return (repeat_search(array + mid, size - mid, value) + mid);
}

/**
 * bin_search - calls binary search on an array
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 *
 * Return: index of the number or -1 if null or not found
 */
int bin_search(int *array, size_t size, int value)
{
	int idx;

	idx = repeat_search(array, size, value);
	if (idx >= 0 && array[idx] != value)
		return (-1);

	return (idx);
}

/**
 * exponential_search - searches for a value in an array using its algorithm
 * @array: input array to seearch
 * @size: size of the array
 * @value: value to search the array for
 *
 * Return: index of the number or -1 if no found or null
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t idx, next;
	int result;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	idx = 1;
	while (array[idx] < value && idx < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)idx, array[idx]);
		idx *= 2;
	}

	next = (idx >= size) ? (size - 1) : idx;
	idx /= 2;
	printf("Value found between indexes [%d] and [%d]\n", (int)idx, (int)next);
	result = bin_search(array + idx, (next + 1) - idx, value);
	if (result >= 0)
		result += idx;

	return (result);
}

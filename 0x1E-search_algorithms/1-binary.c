#include "search_algos.h"

/**
 * binary_search - uses the B-search algorithm
 * @array: the ;ointer to the first element of the array to search
 * @size: of the array to search
 * @value: to loook for
 *
 * Return: the index found or -1
 */
int binary_search(int *array, size_t size, int value)
{
	int m, l = 0, i = 0;
	int r = size - 1;

	if (array == NULL || l > r)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i < r)
				printf(", ");
		}
		printf("\n");
		m = (l + r) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
	}

	return (-1);
}

#include "search_algos.h"

/**
 * interpolation_search - searches using interpolation algorithm
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to find
 *
 * Return: the index of the value or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t lw = 0, hi = size - 1, pos;

	if (!array)
		return (-1);
	while (array[hi] != array[lw])
	{
		pos = lw + (((double)(hi - lw) / (array[hi] - array[lw])) *
				(value - array[lw]));

		if (pos >= size)
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			lw = pos + 1;
		else if (value < array[pos])
			hi = pos - 1;
		else
			return (pos);
	}
	if (array[lw] == value)
		return (lw);
	else
		return (-1);
}

#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: of ints to index
 * @size: of elements in the array
 * @cmp: function to compare values
 *
 * Return: index to the first element where cmp returns !0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int not0, i;

	if (size <= 0)
		return (-1);

	if (cmp && array)
	{
		for (i = 0; i < size; i++)
		{
			not0 = cmp(array[i]);

			if (not0 != 0)
				return (i);
		}
	}

	return (-1);
}

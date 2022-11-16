#include "function_pointers.h"

/**
 * array_iterator - executes the specified array
 * @array: to execute
 * @size: of the array
 * @action: function to be executed
 *
 * Returns: non
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action && array)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}

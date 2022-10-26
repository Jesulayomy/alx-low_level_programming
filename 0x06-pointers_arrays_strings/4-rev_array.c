#include "main.h"

/**
 * reverse_array - switch!
 * @a: an arry of integers
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int t;
	int i[n];

	for (t = 0; t < n; t++)
	{
		i[t] = a[t];
	}

	for (t = 0; t < n; t++)
	{
		a[t] = i[n - t - 1];
	}

}

#include "main.h"

/**
 * reverse_array - switch!
 * @a: an arry of integers
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int t;
	int arr[9999];

	for (t = 0; t < n; t++)
	{
		arr[t] = a[t];
	}

	for (t = 0; t < n; t++)
	{
		a[t] = arr[n - t - 1];
	}

}

#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - counts up or downward to 98
 * @n: - the start integer
 */
void print_to_98(int n)
{
if (n > 98)
{
	for (; n >= 98; n--)
	{
		if (n == 98)
		{
			printf("%d\n", n);
		}
		else
		{
			printf("%d, ", n);
		}
	}
}
else
{
	for (; n <= 98; n++)
	{
		if (n == 98)
		{
			printf("%d\n", n);
		}
		else
		{
			printf("%d, ", n);
		}
	}
}
}

#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int l;

	if (((a >= b) && (a > c)) || ((a >= c) && (a > b)))
	{
		l = a;
	}
	else if (((b >= a) && (b > c)) || ((b >= c) && (b > a)))
	{
		l = b;
	}
	else
	{
		l = c;
	}

	return (l);
}

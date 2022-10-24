#include "main.h"

/**
 * swap_int - swaps two integers lol
 * @a: numero uno
 * @b: numero dos
 *
 * Return: non
 */
void swap_int(int *a, int *b)
{
	int const c = *a;
	int *swapa = a;
	int *swapb = b;
	*swapa = *b;
	*swapb = c;
}

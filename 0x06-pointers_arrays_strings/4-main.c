#include "main.h"
#include <stdio.h>

/**
   * main - check the code
    * @a: an array of integers
     * @n: the number of elements to swap
      *
       * Return: nothing.
        */
void print_array(int *a, int n)
{
    int i;
    i = 0;
    while (i < n)
    {
	    if (i != 0)
	    {
		    printf(", ");
	    }
	    printf("%d", a[i]);
	    i++;
    }
    printf("\n");
}

/**
   * main - check the code
    *
     * Return: Always 0.
      */
int main(void)
{
	    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337, 73, 346 ,56, 63, 36, 36, 36, 36, 363, 774,8, 4, 6, 332, 367, 7,4, 363, 63, 367,3, 63, 636, 36,3, 63,6};

	    print_array(a, sizeof(a) / sizeof(int));
	    reverse_array(a, sizeof(a) / sizeof(int));
	    print_array(a, sizeof(a) / sizeof(int));
	    return (0);
}

#ifndef search_H_
#define search_H_

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);

#endif

#ifndef MAIN_H_
#define MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

void *malloc_checked(unsigned int);
char *string_nconcat(char *, char *, unsigned int);
int _putchar(char);
void *_calloc(unsigned int, unsigned int);
int *array_range(int, int);
void *_realloc(void *, unsigned int, unsigned int);

#endif

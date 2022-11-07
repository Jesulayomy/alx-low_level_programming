#ifndef MAIN_H_
#define MAIN_H_

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <math.h>

char *create_array(unsigned int, char);
char *argstostr(int, char **);
char *_strdup(char *);
int **alloc_grid(int, int);
void free_grid(int **, int);
char **strtow(char *);
char *str_concat(char *, char *);
char **alloc(char *, int, int);

#endif

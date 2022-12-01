#ifndef MAIN_H_
#define MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int _putchar(char);
int get_endianness(void);
int get_bit(unsigned long int, unsigned int);
int set_bit(unsigned long int *, unsigned int);
int clear_bit(unsigned long int *, unsigned int);
void print_binary(unsigned long int);
unsigned int binary_to_uint(const char *);
unsigned int flip_bits(unsigned long int, unsigned long int);

#endif

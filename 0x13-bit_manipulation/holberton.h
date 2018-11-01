#ifndef _HOLBERTON_H
#define _HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>

unsigned int binary_to_uint(const char *b);

void print_binary(unsigned long int n);

int _putchar(char c);

int bin_help(unsigned long int n, unsigned long int sub);

int get_bit(unsigned long int n, unsigned int index);

int set_bit(unsigned long int *n, unsigned int index);
#endif
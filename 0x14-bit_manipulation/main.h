#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
unsigned int	binary_to_uint(const char *b);
void		print_binary(unsigned long int n);
int		get_bit(unsigned long int n, unsigned int index);
void		_putchar(int i);
int		set_bit(unsigned long int *n, unsigned int index);
#endif

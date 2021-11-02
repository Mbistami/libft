#include <stdio.h>

#ifndef LIBFT_H
# define LIBFT_H

int ft_isdigit(int v);
int ft_isupper(int v);
int ft_isalpha(int v);
int ft_isalnum(int v);
int ft_isprint(int v);
int ft_strlen(char *v);
void *memset( void *pointer, int value, size_t count);

#endif
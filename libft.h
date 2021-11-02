#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <string.h>

int		ft_isdigit(int v);
int		ft_isupper(int v);
int		ft_isalpha(int v);
int		ft_isalnum(int v);
int		ft_isprint(int v);
int		ft_strlen(char *v);
void	*ft_memset(void *s, int value, size_t count);
void	*ft_bzero(void *s, int n);
void	*ft_memcpy(void *dest, const char *src, size_t len);

#endif
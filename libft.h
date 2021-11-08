/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruz <gruz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 07:24:46 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/07 12:42:21 by gruz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <string.h>

int				ft_isdigit(int v);
int				ft_isupper(int v);
int				ft_isalpha(int v);
int				ft_isalnum(int v);
int				ft_isprint(int v);
size_t			ft_strlen(const char *v);
void			*ft_memset(void *s, int value, size_t count);
void			*ft_bzero(void *s, int len_to_fill);
void			*ft_memcpy(void *dest, const char *src, size_t size_of_src);
void			*ft_memmove(void *dest, void *src, size_t siz_of_src);
size_t			ft_strlcpy(char *dst, const char *src, size_t size_of_dst);
size_t			ft_strlcat(char *dst, const char *src, size_t size_of_dst);
unsigned char	ft_tolower(int c);
unsigned char	ft_toupper(int c);
char			*ft_strchr(const char *string, int searchChar);
char			*ft_strrchr(const char *string, int searchChar);
int				ft_strncmp(const char *first,
					const char *second, size_t length);
void			*ft_memchr(const void *mb, int searchedChar, size_t size);
int				ft_memcmp(const void *ptr1, const void *ptr2, size_t length);
char			*ft_strnstrn(const char *big, const char *little, size_t len);
void			*ft_calloc(size_t elementCount, size_t elementSize);
char			*ft_strdup(const char *src);
char			*ft_substr(char const *src, unsigned int start, size_t len);
char			*ft_strjoin(const char *s1, const char *s2);
char    		*ft_strtrim(const char *s1, const char *set);
char            **ft_split(const char *s, const char c);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gruz <gruz@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 07:24:46 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/05 23:14:03 by gruz             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <string.h>

int				ft_isdigit(int v);
int				ft_isupper(int v);
int				ft_isalpha(int v);
int				ft_isalnum(int v);
int				ft_isprint(int v);
int				ft_strlen(char *v);
void			*ft_memset(void *s, int value, size_t count);
void			*ft_bzero(void *s, int n);
void			*ft_memcpy(void *dest, const char *src, size_t len);
void			*ft_memmove(void *dest, void *src, size_t size);
size_t			ft_strlcpy(char *dst, char *src, size_t size);
size_t			ft_strlcat(char *dst, char *src, size_t size);
unsigned char	ft_tolower(int c);
unsigned char	ft_toupper(int c);
char			*ft_strchr(const char *string, int searchChar);
char			*ft_strrchr(const char *string, int searchChar);

#endif
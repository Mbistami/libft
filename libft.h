/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbistami <mbistami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 07:24:46 by mbistami          #+#    #+#             */
/*   Updated: 2021/11/15 21:20:15 by mbistami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include<stdlib.h>
# include<unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
int				ft_isdigit(int v);
int				ft_isupper(int v);
int				ft_isalpha(int v);
int				ft_isascii(int c);
int				ft_isalnum(int v);
int				ft_isprint(int v);
size_t			ft_strlen(const char *v);
void			*ft_memset(void *s, int value, size_t count);
void			*ft_bzero(void *s, int len_to_fill);
void			*ft_memcpy(void *dest, const char *src, size_t size_of_src);
void			*ft_memmove(void *dest, void *src, size_t siz_of_src);
size_t			ft_strlcpy(char *dst, const char *src, size_t size_of_dst);
size_t			ft_strlcat(char *dst, char *src, size_t dstsize);
unsigned char	ft_tolower(int c);
unsigned char	ft_toupper(int c);
char			*ft_strchr(const char *string, int searchChar);
char			*ft_strrchr(const char *string, int searchChar);
int				ft_strncmp(const char *first,
					const char *second, size_t length);
void			*ft_memchr(const void *mb, int searchedChar, size_t size);
int				ft_memcmp(const void *ptr1, const void *ptr2, size_t length);
char			*ft_strnstr(const char *big, const char *little, size_t len);
void			*ft_calloc(size_t elementCount, size_t elementSize);
char			*ft_strdup(const char *src);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(const char *s1, const char *s2);
char			*ft_strtrim(const char *s1, const char *set);
char			**ft_split(const char *s, const char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ftstriteri(char *s, void (*f)(unsigned int, char*));
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **alist, t_list *new);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstadd_back(t_list **alst, t_list *new);
void			ft_lstdelone(t_list *lst, void (*del)(void *));
int				ft_atoi(const char *string);
void			ft_lstclear(t_list **lst, void (*del)(void *));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

#endif
NAME=libft.a
SRC=ft_atoi.c\
    ft_calloc.c\
    ft_isalpha.c\
    ft_isascii.c\
    ft_isprint.c\
    ft_memchr.c\
    ft_memcpy.c\
    ft_memset.c\
    ft_strchr.c\
    ft_strjoin.c\
    ft_strlcpy.c\
    ft_strncmp.c\
    ft_strrchr.c\
    ft_substr.c\
    ft_toupper.c\
    ft_bzero.c\
    ft_isalnum.c\
    ft_isdigit.c\
    ft_memcmp.c\
    ft_memmove.c\
    ft_split.c\
    ft_strdup.c\
    ft_strlcat.c\
    ft_strlen.c\
    ft_strnstr.c\
    ft_strtrim.c\
    ft_itoa.c\
    ft_tolower.c\
    ft_strmapi.c\
    ft_putchar_fd.c\
    ft_putstr_fd.c\
    ft_putendl_fd.c\
    ft_putnbr_fd.c\
    ft_lstnew.c\
    ft_lstadd_front.c\
    ft_lstsize.c\
    ft_lstlast.c\
    ft_striteri.c\
    ft_lstadd_back.c\
    ft_lstdelone.c\
    ft_lstclear.c\
    ft_lstiter.c\
    ft_lstmap.c
SRCS_B=ft_lstnew.c\
    ft_lstadd_front.c\
    ft_lstsize.c\
    ft_lstlast.c\
    ft_lstadd_back.c\
    ft_lstdelone.c\
    ft_lstclear.c\
    ft_lstiter.c\
    ft_lstmap.c
OBJS=$(SRC:.c=.o)
OBJS_B=$(SRCS_B:.c=.o)
OUTPUT=output

%.o:%.c
		gcc -c -I ./ -o $@ $< -Wall -Werror -Wextra
all:$(NAME)

$(NAME):$(OBJS)
	ar rc $(NAME) $(OBJS)
clean:
	rm -rf $(OBJS) $(OBJS_B)
	echo "CLEANED"

re: clean all
fclean: clean
		rm -rf $(NAME)
um: all
	${CC} $(NAME) ${CFLAGS} main.c -o ${OUTPUT} 
	./$(OUTPUT)
bonus: $(OBJS_B)
	ar rc $(NAME) $(OBJS_B)
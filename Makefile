CC=gcc
CFLAGS=-Wall -g
DEPS=libft.h
SRC=ft_*.c
OUTPUT=executeMe


make: ${SRC}
	${CC} ${SRC} ${CFLAGS} main.c -o ${OUTPUT}
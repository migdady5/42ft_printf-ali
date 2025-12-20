NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_putchat.c ft_putstr.c ft_putnbr.c ft_putunsigned.c ft_puthex.c ft_putpointer.c ft_printf.c
OBJS = $(SRCS:.c=.o)

.PHONY: all clean fclean re

all: $(NAME) test

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)

test: $(NAME)
	$(CC) $(CFLAGS) -o test mainTest.c $(NAME)

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) test

re: fclean all

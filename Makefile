#SETTINGS#
LIBC = srcs/ft_isalpha.c srcs/ft_isdigit.c srcs/ft_isalnum.c srcs/ft_isascii.c \
      srcs/ft_isprint.c srcs/ft_strlen.c srcs/ft_memset.c srcs/ft_bzero.c \
     srcs/ft_memcpy.c srcs/ft_memmove.c 

SRC = $(LIBC)

CC = cc

CFLAGS = -Werror -Wextra -Wall -I ./

OBJDIR = build

NAME = libft.a

OBJ = $(SRC:.c=.o)

.PHONY: all clean flcean re

#RULES#
all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

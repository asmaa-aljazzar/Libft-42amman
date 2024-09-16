#set anything about test as comment
CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c\
	ft_isdigit.c ft_isprint.c ft_tolower.c\
	ft_toupper.c ft_strlen.c ft_memset.c ft_bzero.c\
	ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c\
	ft_strchr.c ft_strrchr.c ft_strncmp.c
OBJS = $(SRCS:%.c=%.o)

all: $(NAME) test

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

test: $(NAME) $(SRCS) test-libft.c
	$(CC) -o test test-libft.c -L. -lft
	./test

clean:
	rm -f $(OBJS) test

fclean: clean
	rm -f $(NAME)

re: fclean all

CC = gcc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
SRCS = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_tolower.c ft_toupper.c ft_strlen.c
OBJS = $(SRCS:%.c=%.o)

all: $(NAME) test

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

test: $(NAME) $(SRCS) test-libft.c
	$(CC) -o test test-libft.c -L. -lft
#	if [$? -ne 0]; then\
		echo "Compilation or linking faild"\
		exit 1\
	fi
	./test

clean:
	rm -f $(OBJS) test

fclean: clean
	rm -f $(NAME)

re: fclean all

NAME = libft.a

SRC = ft_isalpha.c testing/test.c ft_isdigit.c ft_isalnum.c ft_strlen.c ft_memset.c ft_bzero.c \
		ft_memcpy.c ft_memmove.c

OBJ = $(SRC:.c=.o)

CC = gcc
FLAGS = -Werror -Wextra -Wall
RM = rm -f

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $@ $<

test: $(SRC)
	@$(CC) $^ -o test
	@./test
	@$(RM) ./test

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re
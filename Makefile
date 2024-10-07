NAME = libft.a

SRC =
OBJ = $(SRC:.o=.c)

CC = gcc
FLAGS = -Werror -Wextra -Wall
RM = rm -f

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $@ $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean
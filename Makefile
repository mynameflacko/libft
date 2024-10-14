NAME = libft.a

SRC = ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_isprint.c \
		ft_toupper.c \
		to_lower.c

OBJ = $(SRC:.c=.o)

CC = cc
FLAGS = -Werror -Wextra -Wall
RM = rm -f

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: clean all

.PHONY: all clean fclean re

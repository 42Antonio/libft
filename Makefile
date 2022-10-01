FLAG = -Wall -Wextra -Werror

NAME = libft.a

SRC = ft_atoi.c \
		  ft_bzero.c \
		  ft_calloc.c \
		  ft_isdigit.c \
		  ft_isalpha.c \
		  ft_isascii.c \
		  ft_isprint.c \
		  ft_isalnum.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_memset.c \
		  ft_strlen.c \
		  ft_strlcpy.c \
		  ft_strncmp.c \
		  ft_strtrim.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@echo "$(NAME) created"
	@ranlib $(NAME)
	@echo "$(NAME) indexed"

%.o: %.c
	@gcc $(FLAG) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@echo "OBJ deleted"

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) deleted"

re: fclean all

.PHONY: all, clean, fclean, re

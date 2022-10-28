
NAME	:= libft.a
CC		:= cc
HDR = libft.h
CFLAGS	:= -Wall -Wextra -Werror
FILES	:= $(shell find . -type f -name "ft_*.c")
OBJ		:= $(FILES:%.c=%.o)


all: $(NAME)

%.o : %.c $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
			ar -rc $(NAME) $(OBJ)

# $(NAME) : $(OBJ)
# 			ar -rcs $(NAME) $(OBJ)

clean:
			rm -f $(OBJ)

fclean: clean
			rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
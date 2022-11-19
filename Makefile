# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 13:00:08 by oelkhiar          #+#    #+#              #
#    Updated: 2022/11/19 12:37:40 by oelkhiar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME	:= libft.a
CC		:= cc
HDR = libft.h
CFLAGS	:= -Wall -Wextra -Werror
FILES	:=    ft_strlen.c		\
		  ft_strlcpy.c		\
		  ft_strlcat.c		\
		  ft_strchr.c		\
		  ft_strnstr.c		\
		  ft_strncmp.c		\
		  ft_strdup.c		\
		  ft_strrchr.c		\
		  ft_memset.c		\
		  ft_memcpy.c		\
		  ft_memmove.c		\
		  ft_memchr.c		\
		  ft_memcmp.c		\
		  ft_bzero.c		\
		  ft_atoi.c			\
		  ft_calloc.c		\
		  ft_isalnum.c		\
		  ft_isalpha.c		\
		  ft_isascii.c		\
		  ft_isdigit.c		\
		  ft_isprint.c		\
		  ft_strdup.c		\
		  ft_tolower.c		\
		  ft_toupper.c		\
		  ft_substr.c		\
		  ft_strjoin.c		\
		  ft_strtrim.c		\
		  ft_split.c		\
		  ft_strmapi.c		\
		  ft_itoa.c			\
		  ft_putstr_fd.c	\
		  ft_putchar_fd.c	\
		  ft_putendl_fd.c	\
		  ft_putnbr_fd.c	\
		  ft_striteri.c

OBJ		:= $(FILES:%.c=%.o)

all: $(NAME)

%.o : %.c $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
			ar -rc $(NAME) $(OBJ)

clean:
			rm -f $(OBJ)

fclean: clean
			rm -f $(NAME)

re: fclean all

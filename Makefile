# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 13:00:08 by oelkhiar          #+#    #+#              #
#    Updated: 2022/11/08 13:00:09 by oelkhiar         ###   ########.fr        #
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

SRCS_BN := ft_lstnew.c		\
		  ft_lstsize.c		\
		  ft_lstadd_front.c	\
		  ft_lstadd_back.c	\
		  ft_lstclear.c		\
		  ft_lstlast.c		\
		  ft_lstiter.c		\
		  ft_lstdelone.c	


OBJ		:= $(FILES:%.c=%.o)

OBJS_BONUS = $(SRCS_BN:.c=.o)

all: $(NAME)

%.o : %.c $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
			ar -rc $(NAME) $(OBJ)

bonus : $(OBJS_BONUS)
	ar -rc $(NAME) $(OBJS_BONUS)

clean:
			rm -f $(OBJ) $(OBJS_BONUS)

fclean: clean
			rm -f $(NAME)

re: fclean all

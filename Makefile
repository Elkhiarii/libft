# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oelkhiar <oelkhiar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/08 13:03:20 by adiaz-lo          #+#    #+#              #
#    Updated: 2022/10/18 21:11:11 by oelkhiar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRCS_MAND	=	ft_memset.c		\
		  		ft_memmove.c	\
		  		ft_memchr.c		\
		  		ft_memcmp.c		\
		  		ft_memcpy.c		\
		  		ft_bzero.c		\
		  		ft_atoi.c		\
		  		ft_strlen.c		\
		  		ft_strlcpy.c	\
		  		ft_strlcat.c	\
		 	 	ft_strchr.c		\
		 		ft_strrchr.c	\
		  		ft_strnstr.c	\
				ft_strncmp.c	\
		  		ft_atoi.c		\
		  		ft_isalnum.c	\
		  		ft_isdigit.c	\
		  		ft_isalpha.c	\
		  		ft_isascii.c	\
		 		ft_isprint.c	\
		  		ft_tolower.c	\
		  		ft_toupper.c	\
		  		ft_calloc.c		\
		  		ft_strdup.c		\
				
OBJS_MAND	= ${SRCS_MAND:.c=.o}

CC		= cc

RM		= rm -rf

AR		= ar rcs

RANLIB		= ranlib

CFLAGS += -Wall -Werror -Wextra -g

LFLAGS += -I.

all	:	$(NAME)
		@echo Compiling Library "libft.a" File "Only Mandatory Part": $@ ...

$(NAME)	:	$(OBJS_MAND)
		@echo Compiling Library File: $@ ...
		$(AR) $(NAME) $(OBJS_MAND)
		$(RANLIB) $(NAME)

%.o:	%.c
		@echo Compiling Binary Files: $@ ...
		$(CC) $(CFLAGS) -c $< -o $@ $(LFLAGS)

clean	:	
		@echo Cleaning The .o Generated Files: $@ ...
		$(RM) ${OBJS_MAND}


fclean	:	clean
		@echo Cleaning All ".o & libft.a" Generated Files:
		$(RM) $(NAME)

re	:	fclean all
		@echo Cleaning All ".o & libft.a" Generated Files And Remake Everything:


.PHONY:		all clean fclean re 

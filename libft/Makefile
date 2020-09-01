# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dag00dag <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/21 00:05:19 by dag00dag          #+#    #+#              #
#    Updated: 2020/08/31 19:14:21 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
		ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c ft_memcpy.c\
		ft_memmove.c ft_memset.c ft_printlst.c ft_putendl_fd.c ft_putnbr.c\
		ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c ft_split.c ft_strchr.c\
		ft_strcpy.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c\
		ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c\
		ft_substr.c ft_tolower.c ft_toupper.c ft_putchar_fd.c ft_memcmp.c ft_strchrstr.c \
		ft_strchrfnc.c ft_putchar.c ft_strcnt.c

OBJS		=$(SRCS:.c=.o)

SRCS_BONUS	=ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c \
		ft_lstadd_back.c ft_lstadd_front.c ft_lstnew.c ft_lstsize.c ft_lstfind.c \
		ft_lstdel.c

OBJS_BONUS	=$(SRCS_BONUS:.c=.o)

CC		=gcc

RM		=rm -f

CFLAGS		= -Wall -Wextra -Werror -c

NAME		= libft.a



all:		$(NAME) 

$(NAME):	
		$(CC) -c $(CFLAGS) $(SRCS) $(SRCS_BONUS)
		ar -cvq $(NAME) $(OBJS) $(OBJS_BONUS)

clean:		
		$(RM) $(OBJS) $(OBJS_BONUS) libft.so

fclean:		clean 
		$(RM) $(NAME) libft.so
	
bonus:		
		$(CC) -c $(CFLAGS) $(SRCS_BONUS) $(SRCS)
		ar -cvq $(NAME) $(OBJS_BONUS) $(OBJS)
	
so:	
		$(CC) $(CFLAGS) -fPIC -pedantic $(SRCS) $(SRCS_BONUS) -shared -o libft.so

re:		fclean all

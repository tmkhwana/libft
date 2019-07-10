# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tmkhwana <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 15:02:22 by tmkhwana          #+#    #+#              #
#    Updated: 2019/06/29 05:39:33 by tmkhwana         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc 

CFLAGS = -Wall -Werror -Wextra -c

SRC = ft_isalnum.c\
	  ft_isalpha.c\
	  ft_isascii.c\
	  ft_isdigit.c\
	  ft_isprint.c\
	  ft_toupper.c\
	  ft_tolower.c\
	  ft_putchar.c\
	  ft_putchar_fd.c\
	  ft_putnbr.c\
	  ft_putnbr_fd.c\
	  ft_putstr.c\
	  ft_putstr_fd.c\
	  ft_putendl.c\
	  ft_putendl_fd.c\
	  ft_atoi.c\
	  ft_strlen.c\
	  ft_strcmp.c\
	  ft_strncmp.c\
	  ft_strcpy.c\
	  ft_strncpy.c\
	  ft_strdup.c\
	  ft_strchr.c\
	  ft_strrchr.c\
	  ft_strcat.c\
	  ft_strncat.c\
	  ft_strlcat.c\
	  ft_strstr.c\
	  ft_strnstr.c\
	  ft_bzero.c\
	  ft_memset.c\
	  ft_memcpy.c\
	  ft_memccpy.c\
	  ft_memcmp.c\
	  ft_memmove.c\
	  ft_memalloc.c\
	  ft_memdel.c\
	  ft_memchr.c\
	  ft_strnew.c\
	  ft_strdel.c\
	  ft_strclr.c\
	  ft_striter.c\
	  ft_striteri.c\
	  ft_strmap.c\
	  ft_strmapi.c\
	  ft_strequ.c\
	  ft_strnequ.c\
	  ft_strsub.c\
	  ft_strjoin.c\
	  ft_strtrim.c\
	  ft_strsplit.c\
	  ft_itoa.c\

OBJ = ft_isalnum.o\
	  ft_isalpha.o\
	  ft_isascii.o\
	  ft_isdigit.o\
	  ft_isprint.o\
	  ft_toupper.o\
	  ft_tolower.o\
	  ft_putchar.o\
	  ft_putchar_fd.o\
	  ft_putnbr.o\
	  ft_putnbr_fd.o\
	  ft_putstr.o\
	  ft_putstr_fd.o\
	  ft_putendl.o\
	  ft_putendl_fd.o\
	  ft_atoi.o\
	  ft_strlen.o\
	  ft_strcmp.o\
	  ft_strncmp.o\
	  ft_strcpy.o\
	  ft_strncpy.o\
	  ft_strdup.o\
	  ft_strchr.o\
	  ft_strrchr.o\
	  ft_strcat.o\
	  ft_strncat.o\
	  ft_strlcat.o\
	  ft_strstr.o\
	  ft_strnstr.o\
	  ft_bzero.o\
	  ft_memset.o\
	  ft_memcpy.o\
	  ft_memccpy.o\
	  ft_memcmp.o\
	  ft_memmove.o\
	  ft_memalloc.o\
	  ft_memdel.o\
	  ft_memchr.o\
	  ft_strnew.o\
	  ft_strdel.o\
	  ft_strclr.o\
	  ft_striter.o\
	  ft_striteri.o\
	  ft_strmap.o\
	  ft_strmapi.o\
	  ft_strequ.o\
	  ft_strnequ.o\
	  ft_strsub.o\
	  ft_strjoin.o\
	  ft_strtrim.o\
	  ft_strsplit.o\
	  ft_itoa.o\

all : $(NAME)

$(NAME):
	gcc $(CFLAGS) $(SRC) -c
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

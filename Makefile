#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: apieczyr <apieczyr@student.42.fr>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2017/04/12 23:50:02 by apieczyr          #+#    #+#             *#
#*   Updated: 2017/04/24 09:20:52 by apieczyr         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = libft.a

SRCS = ft_isalpha.c\
	   ft_isalnum.c\
	   ft_isascii.c\
	   ft_isprint.c\
	   ft_isdigit.c\
	   ft_atoi.c\
	   ft_strcat.c\
	   ft_strcmp.c\
	   ft_strcpy.c\
	   ft_strdup.c\
	   ft_strlen.c\
	   ft_strncat.c\
	   ft_strncmp.c\
	   ft_strncpy.c\
	   ft_strstr.c\
	   ft_strlcat.c\
	   ft_memset.c\
	   ft_memcpy.c\
	   ft_bzero.c\
	   ft_memccpy.c\
	   ft_memchr.c\
	   ft_memcmp.c\
	   ft_memmove.c\
	   ft_strchr.c\
	   ft_strnstr.c\
	   ft_tolower.c\
	   ft_toupper.c\
	   ft_strrchr.c\
	   ft_putnbr_fd.c\
	   ft_putendl_fd.c\
	   ft_putstr_fd.c\
	   ft_putchar_fd.c\
	   ft_putnbr.c\
	   ft_putendl.c\
	   ft_putstr.c\
	   ft_putchar.c\
	   ft_itoa.c\
	   ft_strsplit.c\
	   ft_strtrim.c\
	   ft_strjoin.c\
	   ft_strsub.c\
	   ft_strnequ.c\
	   ft_strequ.c\
	   ft_strmapi.c\
	   ft_strmap.c\
	   ft_striteri.c\
	   ft_striter.c\
	   ft_strclr.c\
	   ft_strdel.c\
	   ft_strnew.c\
	   ft_memdel.c\
	   ft_memalloc.c\
	   ft_cleaner.c\
	   ft_strrlen.c\
	   ft_digitlen.c\
	   ft_lstnew.c\
	   ft_lstdelone.c\
	   ft_lstdel.c\
	   ft_lstadd.c\
	   ft_lstiter.c\
	   ft_lstmap.c\
	   ft_isupper.c\
	   ft_islower.c\
	   ft_recursive_power.c

OBJ = $(SRCS:.c=.o) 

HEADERS = libft.h

FLAGS = -Wall -Wextra -Werror

BLUE = $ echo "\033[1;32;4mCompiled. √\n\033[0m"

RED = $ echo "\033[1;31;4mBye bye.\n\033[0m"

all : $(NAME)

$(NAME) :
	@gcc -c $(FLAGS) $(SRCS) -I $(HEADERS) 
	@ar rc $(NAME) $(OBJ)
	@$(BLUE)

clean :
	@/bin/rm -f $(OBJ)
	@$(RED)

fclean : clean
	@/bin/rm -f libft.a


re : fclean all

#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: apieczyr <apieczyr@student.42.fr>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2017/04/12 23:50:02 by apieczyr          #+#    #+#             *#
#*   Updated: 2017/04/12 23:54:09 by apieczyr         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = libft.a

SRC = 	*.c

HEADERS = libft.h

OBJ = 	*.o

FLAGS = -Wall -Wextra -Werror

BLUE = $ echo "\033[1;36;4mA new lib is born.\n\033[0m"

RED = $ echo "\033[1;31;4mSay goodbye to the garbages.\n\033[0m"

all : $(NAME)

$(NAME) :
	@gcc -c $(FLAGS) $(SRC) -I $(HEADERS) 
	@ar rc $(NAME) $(OBJ)
	@$(BLUE)

clean :
	@/bin/rm -f $(OBJ)
	@$(RED)

fclean : clean
	@/bin/rm -f libft.a


re : fclean all

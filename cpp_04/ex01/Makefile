# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/07 17:18:31 by acanterg          #+#    #+#              #
#    Updated: 2022/03/01 18:46:18 by acanterg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC 	= 	main.cpp \
			Animal.cpp \
			Cat.cpp \
			Dog.cpp \
			Brain.cpp

NAME 	=	seeWorldOnFire
CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -std=c++98
FSANIT	=	-fsanitize=address -g

$(NAME):	
			@$(CC) $(CFLAGS) $(FSANIT) $(SRC) -o $(NAME)

test:		re
			./$(NAME)
			@rm -rf $(NAME)

all:		$(NAME)

clean:
			rm -rf $(NAME)

fclean: 	clean

re: fclean all

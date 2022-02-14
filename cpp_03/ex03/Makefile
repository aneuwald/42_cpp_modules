# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/07 17:18:31 by acanterg          #+#    #+#              #
#    Updated: 2022/02/14 11:35:43 by acanterg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
	  ClapTrap.cpp \
	  FragTrap.cpp \
	  ScavTrap.cpp \
	  DiamondTrap.cpp \
      
NAME =  repetitiveWork
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME):	
			@$(CC) $(CFLAGS) $(SRC) -o $(NAME)

test:		re
			./$(NAME)

all:		$(NAME)

clean:
			rm -rf $(NAME)

fclean: 	clean

re: fclean all

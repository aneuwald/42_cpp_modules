# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/07 17:18:31 by acanterg          #+#    #+#              #
#    Updated: 2022/02/14 00:22:26 by acanterg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
	  Fixed.cpp \
	  Point.cpp \
	  bsp.cpp
      
NAME =  bsp
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

$(NAME):	
			@$(CC) $(CFLAGS) $(SRC) -o $(NAME)

test:		re
			./$(NAME)

all:		$(NAME)

clean:
			rm -rf $(NAME)

fclean: 	clean

re: fclean all

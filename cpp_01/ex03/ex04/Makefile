# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/07 17:18:31 by acanterg          #+#    #+#              #
#    Updated: 2022/02/08 20:50:35 by acanterg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
	  File.cpp
      
NAME =  SedIsForLosers
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME):	
			@$(CC) $(CFLAGS) $(SRC) -o $(NAME)

test:		re
			./$(NAME) file 42 ALEXANDRE

all:		$(NAME)

clean:
			rm -rf $(NAME)

fclean: 	clean

re: fclean all

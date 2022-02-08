# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/07 17:18:31 by acanterg          #+#    #+#              #
#    Updated: 2022/02/08 14:27:01 by acanterg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = tests.cpp \
      Account.cpp
      
NAME = thejobofmydreams
CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME):	
			@$(CC) $(CFLAGS) $(SRC) -o $(NAME)
			
all:		$(NAME)

clean:
			rm -rf $(NAME)

fclean: 	clean

re: fclean all

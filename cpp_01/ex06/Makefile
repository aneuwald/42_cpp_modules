# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/07 17:18:31 by acanterg          #+#    #+#              #
#    Updated: 2022/02/09 13:17:03 by acanterg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
	  Karen.cpp
      
NAME =  karenFilter
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME):	
			@$(CC) $(CFLAGS) $(SRC) -o $(NAME)

test:		re
			./$(NAME) DEBUG

all:		$(NAME)

clean:
			rm -rf $(NAME)

fclean: 	clean

re: fclean all

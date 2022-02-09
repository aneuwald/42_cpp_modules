# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/07 17:18:31 by acanterg          #+#    #+#              #
#    Updated: 2022/02/09 13:04:08 by acanterg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
	  Karen.cpp
      
NAME =  Karen20
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

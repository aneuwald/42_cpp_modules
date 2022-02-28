# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/07 17:18:31 by acanterg          #+#    #+#              #
#    Updated: 2022/02/28 18:55:33 by acanterg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
      Contact.cpp \
	  PhoneBook.cpp
      
NAME = myphonebook
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

$(NAME):	
			@$(CC) $(CFLAGS) $(SRC) -o $(NAME)
			
all:		$(NAME)

clean:
			rm -rf $(NAME)

fclean: 	clean

re: fclean all

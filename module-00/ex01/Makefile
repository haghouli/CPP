# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/21 11:35:08 by haghouli          #+#    #+#              #
#    Updated: 2023/06/21 11:35:11 by haghouli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPFLAGS	=  -Wall -Wextra -Werror
CXX			= c++ -std=c++98 
NAME		= phonebook

FILES 	= PhoneBook.cpp main.cpp

O_FILES	= $(FILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(O_FILES)
	$(CXX) $(CPPFLAGS)  $(O_FILES)  -o $(NAME)

clean 	:
	rm -f $(O_FILES)

fclean	: clean
	rm -f $(NAME)

re    	: clean $(NAME)
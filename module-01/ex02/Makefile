# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/07 09:30:47 by haghouli          #+#    #+#              #
#    Updated: 2023/07/07 09:30:49 by haghouli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPFLAGS	= -Wall -Wextra -Werror
CXX			= c++ -std=c++98
NAME		= ex02

FILES 		= main.cpp

O_FILES		= $(FILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(O_FILES)
	$(CXX) $(FLAGES)  $(O_FILES)  -o $(NAME)

clean 	:
	rm -f $(O_FILES)

fclean : clean
	rm -f $(NAME)

re    	: fclean $(NAME)
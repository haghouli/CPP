# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/22 10:41:46 by haghouli          #+#    #+#              #
#    Updated: 2023/06/25 09:04:53 by haghouli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPFLAGS	= -Wall -Wextra -Werror
CXX			= c++ -std=c++98
NAME		= ex05

FILES 		= main.cpp Harl.cpp

O_FILES	= $(FILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(O_FILES)
	$(CXX) $(CPPFLAGS)  $(O_FILES)  -o $(NAME)

clean 	:
	rm -f $(O_FILES)

fclean : clean
	rm -f $(NAME)

re    	: fclean $(NAME)

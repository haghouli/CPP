# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/11 07:22:19 by haghouli          #+#    #+#              #
#    Updated: 2023/08/11 10:48:55 by haghouli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPFLAGS 	= -Wall -Wextra -Werror -g
CXX			= c++
NAME		= convert

CPP_FILES	= main.cpp utiles.cpp ScalarConverter.cpp
OBJ_FILES	= $(CPP_FILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJ_FILES)
	$(CXX) $(CPPFLAGS) $(OBJ_FILES) -o $(NAME)

clean :
	rm -rf $(OBJ_FILES)

fclean: clean
	rm -rf $(NAME)

re : clean all
	

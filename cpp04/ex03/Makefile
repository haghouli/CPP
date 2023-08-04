# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/27 08:18:35 by haghouli          #+#    #+#              #
#    Updated: 2023/08/03 12:33:44 by haghouli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPFLAGS	= -Wall -Wextra -Werror
CXX			= c++ -std=c++98
NAME		= ex03

FILES 		= main.cpp AMateria.cpp MateriaSource.cpp Cure.cpp Ice.cpp Character.cpp

O_FILES	= $(FILES:.cpp=.o)


all : $(NAME)

$(NAME) : $(O_FILES)
	$(CXX) $(CPPFLAGS)  $(O_FILES) -o $(NAME)

clean 	:
	rm -f $(O_FILES)

fclean : clean
	rm -f $(NAME)

re    	: fclean $(NAME)
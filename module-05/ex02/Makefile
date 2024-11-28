# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/01 10:35:18 by haghouli          #+#    #+#              #
#    Updated: 2023/08/18 09:21:48 by haghouli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SANITIZER 	= -fsanitize=address
CPPFLAGS 	= -Wall -Wextra -Werror
CXX 		= c++ -std=c++98
NAME		= ex02

CPP_FILES 	= main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

CPP_OBJS 	= $(CPP_FILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(CPP_OBJS)
	$(CXX) $(CPPFLAGS) $(CPP_OBJS) -o $(NAME)

clean :
	rm -f $(CPP_OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/24 16:27:47 by haghouli          #+#    #+#              #
#    Updated: 2023/08/28 08:50:38 by haghouli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPFLAGS        = -Wall -Wextra -Werror -fsanitize=address -g3
CXX             = c++ -std=c++98
NAME            = ex01

CPP_FILES       = main.cpp Span.cpp

CPP_OBJS        = $(CPP_FILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(CPP_OBJS)
	$(CXX) $(CPPFLAGS) $(CPP_OBJS) -o $(NAME)

clean :
	rm -f $(CPP_OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/29 18:42:03 by haghouli          #+#    #+#              #
#    Updated: 2023/08/29 18:43:30 by haghouli         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPFLAGS        = -Wall -Wextra -Werror
CXX             = c++ -std=c++98
NAME            = btc

CPP_FILES       = main.cpp

CPP_OBJS        = $(CPP_FILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(CPP_OBJS)
        $(CXX) $(CPPFLAGS) $(CPP_OBJS) -o $(NAME)

clean :
        rm -f $(CPP_OBJS)

fclean: clean
        rm -f $(NAME)

re : fclean all
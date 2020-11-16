# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebednar <ebednar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/05 20:43:06 by ebednar           #+#    #+#              #
#    Updated: 2020/11/05 20:48:36 by ebednar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRC =	megaphone.cpp
OBJECTS = $(SRC:.cpp=.o)
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	g++ $(FLAGS) $(OBJECTS) -o $(NAME)

%.o: %.cpp
	g++ $(FLAGS) -c $< -o $@

clean:
	/bin/rm -f $(OBJECTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

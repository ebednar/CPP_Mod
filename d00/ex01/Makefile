# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebednar <ebednar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/05 20:50:28 by ebednar           #+#    #+#              #
#    Updated: 2020/11/05 20:54:50 by ebednar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Book
SRC =	main.cpp \
		Phonebook.cpp \
		Contact.cpp
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

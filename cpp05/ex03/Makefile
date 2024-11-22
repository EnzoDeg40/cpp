# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/05 09:50:56 by edegraev          #+#    #+#              #
#    Updated: 2024/11/22 10:11:34 by edegraev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = intern
SRC_FORM = forms/PresidentialPardonForm.cpp forms/RobotomyRequestForm.cpp forms/ShrubberyCreationForm.cpp
SRC = AForm.cpp Bureaucrat.cpp main.cpp Intern.cpp $(SRC_FORM)
OBJ = $(SRC:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98 -I./ -I./forms

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	clang++ $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

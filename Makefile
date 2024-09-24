# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edegraev <edegraev@student.forty2.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/05 08:56:42 by edegraev          #+#    #+#              #
#    Updated: 2024/09/24 09:43:26 by edegraev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DIRS_CPP00 = cpp00/ex00 cpp00/ex01
DIRS_CPP01 = cpp01/ex00 cpp01/ex01 cpp01/ex02 cpp01/ex03 cpp01/ex04 cpp01/ex05 cpp01/ex06
DIRS_CPP02 = cpp02/ex00 cpp02/ex01 cpp02/ex02
DIRS_CPP03 = 
DIRS_CPP04 = cpp04/ex00 cpp04/ex01 cpp04/ex02
DIRS = $(DIRS_CPP00) $(DIRS_CPP01) $(DIRS_CPP02) $(DIRS_CPP03) $(DIRS_CPP04)

GREEN = \033[1;32m
RESET = \033[0m

all:
	@for dir in $(DIRS); do \
		echo "$(GREEN)Making: $$dir$(RESET)"; \
		$(MAKE) -s -C $$dir; \
	done

clean:
	@for dir in $(DIRS); do \
		$(MAKE) clean -C $$dir; \
	done

fclean:
	@for dir in $(DIRS); do \
		$(MAKE) fclean -C $$dir; \
	done
	
re: fclean
	$(MAKE) all

.PHONY: all clean fclean re
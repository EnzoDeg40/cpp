# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edegraev <edegraev@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/05 08:56:42 by edegraev          #+#    #+#              #
#    Updated: 2025/01/06 09:24:49 by edegraev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DIRS_CPP00 = cpp00/ex00 cpp00/ex01
DIRS_CPP01 = cpp01/ex00 cpp01/ex01 cpp01/ex02 cpp01/ex03 cpp01/ex04 cpp01/ex05 cpp01/ex06
DIRS_CPP02 = cpp02/ex00 cpp02/ex01 cpp02/ex02
DIRS_CPP03 = cpp03/ex00 cpp03/ex01 cpp03/ex02 cpp03/ex03
DIRS_CPP04 = cpp04/ex00 cpp04/ex01 cpp04/ex02
DIRS_CPP05 = cpp05/ex00 cpp05/ex01 cpp05/ex02
DIRS_CPP06 = cpp06/ex00 cpp06/ex01 cpp06/ex02
DIRS_CPP07 = cpp07/ex00 cpp07/ex01 cpp07/ex02
DIRS_CPP08 = cpp08/ex00 cpp08/ex01 cpp08/ex02
DIRS_CPP09 = cpp09/ex00 cpp09/ex01 cpp09/ex02

DIRS = $(DIRS_CPP00) $(DIRS_CPP01) $(DIRS_CPP02) $(DIRS_CPP03) $(DIRS_CPP04) $(DIRS_CPP05) $(DIRS_CPP06) $(DIRS_CPP07) $(DIRS_CPP08) $(DIRS_CPP09)

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
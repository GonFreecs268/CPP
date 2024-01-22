# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/17 17:50:50 by jaristil          #+#    #+#              #
#    Updated: 2024/01/22 17:09:06 by jaristil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ----------- Program ----------- #

NAME		:= DiamondTrap
C+			:= c++
FLAGS		:= -Wall -Wextra -Werror -MMD -std=c++98

# ---------- Directories ----------- #

OBJ_DIR 	:= .objs/
C_OBJ_DIR	:= @mkdir -p $(OBJ_DIR)

# ---------- Colors ----------- #

GREEN=\033[0;32m
BLUE=\033[0;34m
RED=\033[0;31m
PINK=\033[0;35m
END=\033[0m

# ----------- Files ----------- #

SRC			:= 	main.cpp \
				ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
				
OBJ			:=$(SRC:.cpp=.o)
OBJ			:=$(addprefix $(OBJ_DIR), $(OBJ))
DEPS		:=$(OBJ:.o=.d)

# ----------- Rules ----------- #

all: $(NAME)

$(NAME): $(OBJ)
	$(C+) $(FLAGS) $(OBJ) -o $(NAME) 

$(OBJ_DIR)%.o: %.cpp 
	$(C_OBJ_DIR)
	$(C+) $(FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re

-include $(DEPS)

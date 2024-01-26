# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/24 14:58:43 by jaristil          #+#    #+#              #
#    Updated: 2024/01/25 16:39:23 by jaristil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ----------- Program ----------- #

NAME		:= Animal
C+			:= c++
FLAGS		:= -Wall -Wextra -Werror -MMD -std=c++98 -g3

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
				Animal.cpp Dog.cpp Cat.cpp \
				WrongAnimal.cpp WrongCat.cpp \
				
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

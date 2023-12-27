# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/10 17:21:35 by jaristil          #+#    #+#              #
#    Updated: 2023/12/27 18:55:54 by jaristil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ----------- Program ----------- #

NAME := phonebook
CC := c++
FLAGS := -Wall -Wextra -Werror -std=c++98

# ---------- Delete ----------- #

RM = rm -rf

# ---------- Colors ----------- #

GREEN=\033[0;32m
BLUE=\033[0;34m
RED=\033[0;31m
PINK=\033[0;35m
END=\033[0m

# ----------- Files ----------- #

SRC := main.cpp contact.cpp phonebook.cpp

INCLUDE := phonebook.hpp contact.hpp

OBJ	:= $(SRC:.cpp=.o)

# --------- Compiles ---------- #

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

# ----------- Rules ----------- #
	
all: $(NAME)

$(NAME) : $(OBJ) $(INCLUDE)
	@echo "$(BLUE) ...Project compiling... $(END)"
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@echo "$(GREEN) ...Project compiled... $(END)"
	

clean :
	@echo "$(BLUE) ...Removing object files... $(END)"
	@$(RM) $(OBJ)
	@echo "$(RED) ...All object removed ... $(END)"

fclean : clean
	@echo "$(BLUE) ...Removing executables... $(END)"
	@$(RM) $(NAME)
	@echo "$(RED) ...Executables removed...$(END)"

re : fclean all

.PHONY : all clean fclean re
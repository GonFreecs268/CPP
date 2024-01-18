# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaristil <jaristil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/17 17:50:50 by jaristil          #+#    #+#              #
#    Updated: 2024/01/18 13:54:03 by jaristil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ----------- Program ----------- #

NAME := ClapTap
CC := c++
FLAGS := -Wall -Wextra -Werror -std=c++98

# ---------- Directories ----------- #

HD_DIR = ./includes
SRC_DIR = ./src 
OBJ_DIR = ./objs

# ---------- Delete ----------- #

RM = rm -rf

# ---------- Colors ----------- #

GREEN=\033[0;32m
BLUE=\033[0;34m
RED=\033[0;31m
PINK=\033[0;35m
END=\033[0m

# ----------- Files ----------- #

# INCLUDE := colors.hpp

SRC_F := main.cpp 

SRC = $(addprefix $(SRC_DIR)/, $(SRC_F))
OBJ = $(patsubst $(SRC_DIR)/%,$(OBJ_DIR)/%,$(SRC:.c=.o))
# OBJ	:= $(SRC:.cpp=.o)

# --------- Compiles ---------- #

# %.o: %.cpp
# 	@$(CC) $(FLAGS) -c $< -o $@

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp $(HD_DIR)
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) -I $(HD_DIR) -c $< -o $@

# ----------- Rules ----------- #
	
$(NAME) : $(OBJ)
	@echo "$(BLUE) ...Project compiling... $(END)"
	@$(CC) $(FLAGS) -I $(HD_DIR) $(OBJ) -o $(NAME)
	@echo "$(GREEN) ...Project compiled... $(END)"
	
all: $(NAME)

clean :
	@echo "$(BLUE) ...Removing object files... $(END)"
	@$(RM) $(OBJ_DIR)
	@echo "$(RED) ...All object removed ... $(END)"

fclean : clean
	@echo "$(BLUE) ...Removing executables... $(END)"
	@$(RM) $(NAME)
	@echo "$(RED) ...Executables removed...$(END)"

scan :
		@echo "$(BLUE) ...Running scan... $(END)"
		@scan-build-12 make -s
		@echo " $(GREEN) ...Scan finished... $(END)"

re : fclean all

.PHONY : all clean fclean scan re

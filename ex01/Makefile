# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uxmancis <uxmancis@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/19 15:59:05 by uxmancis          #+#    #+#              #
#    Updated: 2024/08/19 15:59:05 by uxmancis         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and compiler flags
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 #-fsanitize=address

# Source files and object files
SRC = src/main.cpp src/ClapTrap.cpp src/ScavTrap.cpp
OBJ = $(SRC:.cpp=.o)

# Executable name
NAME = cpp02_ex01

# Make all rule
all: $(NAME)

# Build the executable
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

# Compile source files into object files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f $(OBJ)

# Clean everything, including the executable
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

# Phony targets
.PHONY: all clean fclean re
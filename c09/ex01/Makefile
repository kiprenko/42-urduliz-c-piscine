# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/22 17:49:54 by ykiprenk          #+#    #+#              #
#    Updated: 2024/06/26 21:03:17 by ykiprenk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = srcs
HDR_DIR = includes
OBJ_DIR = $(SRC_DIR)
SRC_FILES = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
SRC = $(patsubst %.c,$(SRC_DIR)/%.c,$(SRC_FILES))
OBJ = $(patsubst %.c,$(OBJ_DIR)/%.o,$(SRC_FILES))
LIB_FILE = libft.a

all: $(LIB_FILE)

$(LIB_FILE): $(OBJ)
	ar rcs $@ $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(wildcard $(HDR_DIR)/ft.h)
	$(CC) $(CFLAGS) -I$(HDR_DIR) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(LIB_FILE)

re: fclean all

.PHONY: all clean fclean re


# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/22 17:49:54 by ykiprenk          #+#    #+#              #
#    Updated: 2024/06/23 14:49:55 by ykiprenk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC_DIR = srcs
OBJ_DIR = $(SRCS_DIR)
SRC_FILES = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
SRC = $(patsubst %.c,$(SRC_DIR)/%.c,$(SRC_FILES))
OBJ = $(patsubst %.c,$(OBJ_DIR)/%.o,$(SRC))

all: $(OBJ)

$(OBJ_DIR)/%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

libft.a:

clean:

fclean:

re:


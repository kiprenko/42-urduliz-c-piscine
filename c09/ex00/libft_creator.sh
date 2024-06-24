# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/22 17:29:41 by ykiprenk          #+#    #+#              #
#    Updated: 2024/06/22 17:45:06 by ykiprenk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash
cc -Wall -Wextra -Werror -c ft_putchar.c -c ft_swap.c -c ft_putstr.c -c ft_strlen.c -c ft_strcmp.c
ar rcs libft.a *.o
ranlib libft.a

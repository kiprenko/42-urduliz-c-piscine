/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <ykiprenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 17:38:40 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/09 18:53:25 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	number_char;
	int		number;

	number = 0;
	while (number <= 9)
	{
		number_char = number + '0';
		write(1, &number_char, 1);
		number++;
	}
}

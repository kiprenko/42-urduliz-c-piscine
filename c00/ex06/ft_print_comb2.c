/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 22:03:00 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/09 22:23:10 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_nbr(int nbr);

char	g_space = ' ';
char	g_comma = ',';

void	ft_print_comb2(void)
{
	int	first_nbr;
	int	second_nbr;

	first_nbr = 0;
	while (first_nbr <= 98)
	{
		second_nbr = first_nbr + 1;
		while (second_nbr <= 99)
		{
			write_nbr(first_nbr);
			write(1, &g_space, 1);
			write_nbr(second_nbr);
			if (!(first_nbr == 98 && second_nbr == 99))
			{
				write(1, &g_comma, 1);
				write(1, &g_space, 1);
			}
			second_nbr++;
		}
		first_nbr++;
	}
}

void	write_nbr(int nbr)
{
	char	dgt;

	dgt = (nbr / 10) + '0';
	write(1, &dgt, 1);
	dgt = (nbr % 10) + '0';
	write(1, &dgt, 1);
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/

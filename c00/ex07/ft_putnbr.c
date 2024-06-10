/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 21:09:57 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/09 21:58:20 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_nbr(int nb);

void	ft_putnbr(int nb)
{
	char	symbol;

	if (nb < 0)
	{
		symbol = '-';
		write(1, &symbol, 1);
		nb = -nb;
	}
	if (nb / 10 > 0)
	{
		ft_putnbr(nb / 10);
	}
	symbol = (nb % 10) + '0';
	write(1, &symbol, 1);
}
/*
int	main(void)
{
	char	new_line;

	new_line = '\n';
	ft_putnbr(0);
	write(1, &new_line, 1);
	ft_putnbr(-123);
	write(1, &new_line, 1);
	ft_putnbr(123);
	write(1, &new_line, 1);
	ft_putnbr(44);
	write(1, &new_line, 1);
	ft_putnbr(875);
	write(1, &new_line, 1);
	ft_putnbr(-875);
	write(1, &new_line, 1);
	ft_putnbr(137081);
	return (0);
}
*/

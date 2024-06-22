/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 00:47:25 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/22 17:04:37 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	ft_write_str(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_write_nl(void)
{
	write(1, "\n", 1);
}

void	ft_putnbr(int nb)
{
	char	symbol;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_write_str(par[i].str);
		ft_write_nl();
		ft_putnbr(par[i].size);
		ft_write_nl();
		ft_write_str(par[i].copy);
		ft_write_nl();
		i++;
	}
}

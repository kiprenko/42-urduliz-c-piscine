/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 20:29:31 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/10 20:50:59 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}
/*
int	main(void)
{
	int		nbr;
	char	symbol;

	nbr = 15;
	ft_ft(&nbr);
	symbol = nbr / 10 + '0';
	write(1, &symbol, 1);
	symbol = nbr % 10 + '0';
	write(1, &symbol, 1);
	return (0);
}
*/

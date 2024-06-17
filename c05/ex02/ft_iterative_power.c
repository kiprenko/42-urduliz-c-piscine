/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 21:16:08 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/17 22:02:10 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	empowered_nb;

	if (power < 0)
	{
		return (0);
	}
	else if (power == 0 && nb == 0)
	{
		return (1);
	}
	empowered_nb = 1;
	while (power > 0)
	{
		empowered_nb *= nb;
		power--;
	}
	return (empowered_nb);
}
/*
int	main(void)
{	
	int	nb = 10;
	int	p =  3;
	printf("Power [%d] to [%d] = [%d]\n", p, nb, ft_iterative_power(nb, p));
	nb = 3;
	p = 4;
	printf("Power [%d] to [%d] = [%d]\n", p, nb, ft_iterative_power(nb, p));
	nb = 1;
	p = 10;
	printf("Power [%d] to [%d] = [%d]\n", p, nb, ft_iterative_power(nb, p));
	nb = 0;
	p = 0;
	printf("Power [%d] to [%d] = [%d]\n", p, nb, ft_iterative_power(nb, p));
	nb = 2;
	p = -3;
	printf("Power [%d] to [%d] = [%d]\n", p, nb, ft_iterative_power(nb, p));
	nb = -2;
	p = 3;
	printf("Power [%d] to [%d] = [%d]\n", p, nb, ft_iterative_power(nb, p));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 21:16:08 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/17 22:14:11 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main(void)
{	
	int	nb = 10;
	int	p =  3;
	printf("Power [%d] to [%d] = [%d]\n", p, nb, ft_recursive_power(nb, p));
	nb = 3;
	p = 4;
	printf("Power [%d] to [%d] = [%d]\n", p, nb, ft_recursive_power(nb, p));
	nb = 1;
	p = 10;
	printf("Power [%d] to [%d] = [%d]\n", p, nb, ft_recursive_power(nb, p));
	nb = 0;
	p = 0;
	printf("Power [%d] to [%d] = [%d]\n", p, nb, ft_recursive_power(nb, p));
	nb = 2;
	p = -3;
	printf("Power [%d] to [%d] = [%d]\n", p, nb, ft_recursive_power(nb, p));
	nb = -2;
	p = 3;
	printf("Power [%d] to [%d] = [%d]\n", p, nb, ft_recursive_power(nb, p));
}*/

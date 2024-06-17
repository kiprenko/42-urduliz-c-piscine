/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 23:23:05 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/17 23:35:28 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
	{
		return (0);
	}
	i = nb - 1;
	while (i > 1)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i--;
	}
	return (1);
}
/*
int	main(void)
{
	printf("[%d] is prime [%d]\n", 5, ft_is_prime(5));
	printf("[%d] is prime [%d]\n", 6, ft_is_prime(6));
	printf("[%d] is prime [%d]\n", 8, ft_is_prime(8));
	printf("[%d] is prime [%d]\n", 11, ft_is_prime(11));
	printf("[%d] is prime [%d]\n", 17, ft_is_prime(17));
	printf("[%d] is prime [%d]\n", 375, ft_is_prime(375));
	return (0);
}*/

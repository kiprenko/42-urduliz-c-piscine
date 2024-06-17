/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 23:23:05 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/17 23:59:29 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 3)
	{
		return (2);
	}
	while (nb <= 2147483647)
	{
		i = nb - 1;
		while (i > 1)
		{
			if (nb % i == 0)
			{
				break ;
			}
			i--;
		}
		if (i == 1)
		{
			return (nb);
		}
		nb++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("[%d] next prime [%d]\n", 0, ft_find_next_prime(0));
	printf("[%d] next prime [%d]\n", 1, ft_find_next_prime(1));
	printf("[%d] next prime [%d]\n", 2, ft_find_next_prime(2));
	printf("[%d] next prime [%d]\n", 3, ft_find_next_prime(3));
	printf("[%d] next prime [%d]\n", 4, ft_find_next_prime(4));
	printf("[%d] next prime [%d]\n", 5, ft_find_next_prime(5));
	printf("[%d] next prime [%d]\n", 6, ft_find_next_prime(6));
	printf("[%d] next prime [%d]\n", 8, ft_find_next_prime(8));
	printf("[%d] next prime [%d]\n", 11, ft_find_next_prime(11));
	printf("[%d] next prime [%d]\n", 17, ft_find_next_prime(17));
	printf("[%d] next prime [%d]\n", 375, ft_find_next_prime(375));
	printf("[%d] next prime [%d]\n", 1000, ft_find_next_prime(1000));
	return (0);
}*/

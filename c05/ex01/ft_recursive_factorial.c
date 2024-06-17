/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 21:16:08 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/17 21:33:25 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int	main(void)
{
	int	nb = 10;	
	printf("Factorial of [%d] = [%d]\n", nb, ft_recursive_factorial(nb));
	nb = 5;
	printf("Factorial of [%d] = [%d]\n", nb, ft_recursive_factorial(nb));
	nb = 0;
	printf("Factorial of [%d] = [%d]\n", nb, ft_recursive_factorial(nb));
	nb = 1;
	printf("Factorial of [%d] = [%d]\n", nb, ft_recursive_factorial(nb));
}*/

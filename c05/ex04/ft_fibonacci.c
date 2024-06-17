/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 22:16:48 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/17 22:51:06 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	else if (index < 2)
	{
		return (index);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int	main(void)
{
	int	i = 0;
	printf("[%d] Fibonacci number is [%d]\n", i, ft_fibonacci(i));
	i = 1;
	printf("[%d] Fibonacci number is [%d]\n", i, ft_fibonacci(i));
	i = 2;
	printf("[%d] Fibonacci number is [%d]\n", i, ft_fibonacci(i));
	i = 3;
	printf("[%d] Fibonacci number is [%d]\n", i, ft_fibonacci(i));
	i = 4;
	printf("[%d] Fibonacci number is [%d]\n", i, ft_fibonacci(i));
	i = 5;
	printf("[%d] Fibonacci number is [%d]\n", i, ft_fibonacci(i));
	i = 6;
	printf("[%d] Fibonacci number is [%d]\n", i, ft_fibonacci(i));
	return (0);
}*/

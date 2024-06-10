/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 21:19:12 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/10 21:32:27 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b)
{
	int	*temp;

	temp = (int *) malloc(sizeof(int));
	*temp = *a;
	*a = *b;
	*b = *temp;
}
/*
int	main(void)
{
	int	nbr_a;
	int	nbr_b;
	char	symbol;

	nbr_a = 1;
	nbr_b = 5;
	symbol = nbr_a + '0';
	write(1, &symbol, 1);
	symbol = nbr_b + '0';
	write(1, &symbol, 1);
	ft_swap(&nbr_a, &nbr_b);
	symbol = nbr_a + '0';
	write(1, &symbol, 1);
	symbol = nbr_b + '0';
	write(1, &symbol, 1);
}*/

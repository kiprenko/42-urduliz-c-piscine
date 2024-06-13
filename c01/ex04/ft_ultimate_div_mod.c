/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 22:40:53 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/13 21:59:53 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int		a;
	int		b;
	char	symbol;

	a = 37;
	b = 15;
	ft_ultimate_div_mod(&a, &b);
	symbol = a + '0';
	write(1, &symbol, 1);
	symbol = b + '0';
	write(1, &symbol, 1);
}*/

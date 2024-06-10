/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 22:07:24 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/10 22:45:24 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int		a;
	int		b;
	int		*div;
	int		*mod;
	char	symbol;

	a = 37;
	b = 15;
	div = (int *) malloc(sizeof(int));
	mod = (int *) malloc(sizeof(int));
	ft_div_mod(a, b, div, mod);
	symbol = *div + '0';
	write(1, &symbol, 1);
	symbol = *mod + '0';
	write(1, &symbol, 1);
	free(div);
	free(mod);
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 21:04:51 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/12 21:24:20 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	t;
	int	i;

	i = 0;
	while (i <= size / 2)
	{
		t = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = t;
		i++;
	}
}
/*
int	main(void)
{
	int	size = 7;
	int	*tab = (int *) malloc(size * sizeof(int));
	int	i = 0;
	char	symbol;

	while (i < size)
	{
		tab[i] = i + 1;
		symbol = tab[i] + '0';
		write(1, &symbol, 1);
		i++;
	}
	symbol = '\n';
	write(1, &symbol, 1);

	ft_rev_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		symbol = tab[i] + '0';
		write(1, &symbol, 1);
		i++;
	}
}*/

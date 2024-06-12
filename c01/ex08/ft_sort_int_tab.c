/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 21:04:51 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/12 21:37:49 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <time.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	t;
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				t = tab[i];
				tab[i] = tab[j];
				tab[j] = t;
			}
			j++;
		}
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

	srand(time(NULL));
	while (i < size)
	{
		tab[i] = rand() % 10;
		symbol = tab[i] + '0';
		write(1, &symbol, 1);
		i++;
	}
	symbol = '\n';
	write(1, &symbol, 1);

	ft_sort_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		symbol = tab[i] + '0';
		write(1, &symbol, 1);
		i++;
	}
}*/

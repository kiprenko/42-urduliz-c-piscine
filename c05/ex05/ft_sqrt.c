/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 22:53:33 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/17 23:19:48 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 1)
	{
		return (1);
	}
	i = 1;
	while (i < nb)
	{
		if (i * i == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	int	nb = 9;
	printf("Square of [%d] is [%d]\n", nb, ft_sqrt(nb));
	nb = 121;
	printf("Square of [%d] is [%d]\n", nb, ft_sqrt(nb));
	nb = 1;
	printf("Square of [%d] is [%d]\n", nb, ft_sqrt(nb));
	nb = 0;
	printf("Square of [%d] is [%d]\n", nb, ft_sqrt(nb));
	nb = 3;
	printf("Square of [%d] is [%d]\n", nb, ft_sqrt(nb));
	nb = 16;
	printf("Square of [%d] is [%d]\n", nb, ft_sqrt(nb));
	nb = 49;
	printf("Square of [%d] is [%d]\n", nb, ft_sqrt(nb));
	return (0);
}
*/

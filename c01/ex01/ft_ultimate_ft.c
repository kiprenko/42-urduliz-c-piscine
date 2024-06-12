/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 20:51:45 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/10 21:14:43 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
/*
int	main(void)
{
	int	nbr;
	int	*	pointer1;
	int	**	pointer2;
	int	***	pointer3;
	int	****	pointer4;
	int	*****	pointer5;
	int	******	pointer6;
	int	*******	pointer7;
	int	********	pointer8;
	int	*********	pointer9;
	char	symbol;

	pointer1 = &nbr;
	pointer2 = &pointer1;
	pointer3 = &pointer2;
	pointer4 = &pointer3;
	pointer5 = &pointer4;
	pointer6 = &pointer5;
	pointer7 = &pointer6;
	pointer8 = &pointer7;
	pointer9 = &pointer8;
	ft_ultimate_ft(pointer9);
	symbol = nbr / 10 + '0';
	write(1, &symbol, 1);
	symbol = nbr % 10 + '0';
	write(1, &symbol, 1);
	return (0);
}
*/

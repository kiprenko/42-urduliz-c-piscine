/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 20:37:27 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/09 21:03:24 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_number(int f, int s, int t);

char	g_comma = ',';
char	g_space = ' ';

void	ft_print_comb(void)
{
	int		first_number;
	int		second_number;
	int		third_number;

	first_number = 0;
	while (first_number <= 7)
	{
		second_number = first_number + 1;
		while (second_number <= 8)
		{
			third_number = second_number + 1;
			while (third_number <= 9)
			{
				write_number(first_number, second_number, third_number);
				third_number++;
			}
			second_number++;
		}
		first_number++;
	}
}

void	write_number(int first_num, int second_num, int third_num)
{
	char	first_digit;
	char	second_digit;
	char	third_digit;

	first_digit = first_num + '0';
	second_digit = second_num + '0';
	third_digit = third_num + '0';
	write(1, &first_digit, 1);
	write(1, &second_digit, 1);
	write(1, &third_digit, 1);
	if (!(first_num == 7
			&& second_num == 8
			&& third_num == 9))
	{
		write(1, &g_comma, 1);
		write(1, &g_space, 1);
	}
}

/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 21:11:11 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/16 19:42:39 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_printchar_non_printable(unsigned char c)
{
	char	hex[3];
	char	*hex_digits;

	hex_digits = "0123456789abcdef";
	hex[0] = '\\';
	hex[1] = hex_digits[c / 16];
	hex[2] = hex_digits[c % 16];
	write(1, hex, 3);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = (unsigned char) str[i];
		if (c < 32 || c == 127)
		{
			ft_printchar_non_printable(c);
		}
		else
		{
			write(1, &c, 1);
		}
		i++;
	}
}
/*
int	main(void)
{
	char	str[] = "Coucou\ntu \tvas bien\r ?";
	ft_putstr_non_printable(str);
	return (0);
}*/

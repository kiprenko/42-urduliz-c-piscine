/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 20:11:05 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/16 21:30:40 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
	{
		return (1);
	}
	return (0);
}

unsigned int	ft_nbrlen(char *str)
{
	int		i;
	int		nbrlen;
	char	c;

	i = 0;
	nbrlen = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c != '-' && c != '+' && !(c >= '0' && c <= '9')
			&& ft_isspace(c) == 0)
		{
			break ;
		}
		if (c != '-' && c != '+' && ft_isspace(c) == 0)
		{
			nbrlen++;
		}
		i++;
	}
	return (nbrlen);
}

unsigned int	ft_calcdec(unsigned int nbrlen)
{
	unsigned int	dec;

	dec = 1;
	while (nbrlen > 1)
	{
		dec *= 10;
		nbrlen--;
	}
	return (dec);
}

int	ft_atoi(char *str)
{
	int				nbrlen;
	unsigned int	dec;
	int				res;
	int				sign;

	nbrlen = ft_nbrlen(str);
	dec = ft_calcdec(nbrlen);
	res = 0;
	sign = 1;
	while (*str != '\0' && nbrlen > 0)
	{
		if (*str == '+' || ft_isspace(*str) == 1 || *str == '-')
		{
			if (*str == '-')
				sign = -sign;
			str++;
			continue ;
		}
		res += dec * (*str - '0');
		nbrlen--;
		dec /= 10;
		str++;
	}
	return (res * sign);
}
/*
int	main(void)
{
	char	str[] = " \r  ---+--+123450ab567";
	printf("Final result is: %d\n", ft_atoi(str));
}*/

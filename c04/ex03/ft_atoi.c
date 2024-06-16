/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 20:11:05 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/16 21:16:16 by ykiprenk         ###   ########.fr       */
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
	int	i;
	int	nbrlen;
	char	c;

	i = 0;
	nbrlen = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		printf("%c", c);
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

int	ft_atoi(char *str)
{
	int	nbrlen;
	int	dec;
	int	i;
	int	res;
	int	sign;

	nbrlen = ft_nbrlen(str);
	dec = 1;
	i = nbrlen;
	while (i > 1)
	{
		dec *= 10;
		i--;
	}
	res = 0;
	sign = 1;
	while (*str != '\0' && nbrlen > 0)
	{
		if (*str == '+' || ft_isspace(*str) == 1)
		{
			str++;
			continue ;
		}
		if (*str == '-')
		{
			str++;
			sign = -sign;
			continue ;
		}
		res += dec * (*str - '0');
		nbrlen--;
		dec /= 10;
		str++;
	}
	return (res * sign);
}

int	main(void)
{
	char	str[] = " \r  ---+--+123450ab567";
	printf("Final result is: %d\n", ft_atoi(str));
}

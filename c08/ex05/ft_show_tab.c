/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 00:47:25 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/22 16:22:16 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
// ex05
#include "ft_stock_str.h"
#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_to_s_stock_str(char *str, struct s_stock_str *s)
{
	int	i;
	int	strlen;

	i = 0;
	strlen = ft_strlen(str);
	s->size = strlen;
	s->str = str;
	s->copy = malloc(strlen * sizeof(char));
	if (s->copy == NULL)
		return (0);
	while (i < strlen)
	{
		s->copy[i] = str[i];
		i++;
	}
	return (1);
}

void	ft_term_arr(struct s_stock_str *s)
{
	s->str = 0;
	s->copy = 0;
	s->size = 0;
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*s;
	int					i;

	s = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		if (ft_to_s_stock_str(av[i], &(s[i])))
			return (NULL);
		i++;
	}
	ft_term_arr(&(s[ac]));
	return (s);
}

// ex05
void	ft_write_str(char *str)
{
	while(*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_write_nl()
{
	write(1, "\n", 1);
}

void	ft_putnbr(int nb)
{
	char	symbol;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		symbol = '-';
		write(1, &symbol, 1);
		nb = -nb;
	}
	if (nb / 10 > 0)
	{
		ft_putnbr(nb / 10);
	}
	symbol = (nb % 10) + '0';
	write(1, &symbol, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_write_str(par[i].str);
		ft_write_nl();
		ft_putnbr(par[i].size);
		ft_write_nl();
		ft_write_str(par[i].copy);
		ft_write_nl();
		i++;	
	}
}

int	main(void)
{
	
	printf("Initializing array of strs");
	char	*arr[] = {"String1", "String2", "String3"};
	printf("Converting strs to struct");
	struct s_stock_str *s = ft_strs_to_tab(3, arr);
	printf("Converted strs to struct");
	ft_show_tab(s);
	return (0);
}

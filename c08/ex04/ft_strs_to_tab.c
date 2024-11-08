/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 00:47:25 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/22 19:57:35 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

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
	s->copy = malloc((strlen + 1) * sizeof(char));
	if (s->copy == NULL)
		return (0);
	while (i < strlen)
	{
		s->copy[i] = str[i];
		i++;
	}
	s->copy[i] = '\0';
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
		if (!ft_to_s_stock_str(av[i], &(s[i])))
			return (NULL);
		i++;
	}
	ft_term_arr(&(s[ac]));
	return (s);
}

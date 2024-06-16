/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 18:46:24 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/15 19:59:49 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	c;
	char	pc;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (i == 0)
		{
			if (c >= 'a' && c <= 'z')
				str[i] = c - 32;
		}
		else
		{
			pc = str[i - 1];
			if ((c >= 'a' && c <= 'z')
				&& !(pc >= 'a' && pc <= 'z')
				&& !(pc >= 'A' && pc >= 'A')
				&& !(pc >= '0' && pc >= '0'))
				str[i] = c - 32;
		}
		i++;
	}
	return (str);
}
/*
int main()
{
	char test[] = "salut, comment tu vas ? 42mots";
    	int		i;
	char	c;
	
	i = 0;
	ft_strcapitalize(test);
	while (test[i] != '\0')
	{
		c = test[i];
		write(1, &c, 1);
		i++;
	}
	return (0);
}*/

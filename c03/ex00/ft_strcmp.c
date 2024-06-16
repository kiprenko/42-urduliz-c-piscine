/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 13:40:48 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/16 14:04:16 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main(void)
{
	char	s1[] = "Hello, world!";
	char	s2[] = "Hello, a world!";
	int	cmpres = ft_strcmp(s1, s2);
	if (cmpres > 0)
	{
		write(1, "s1 gt s2", 8); 
	}
	else if (cmpres < 0)
	{
		write(1, "s1 lt s2", 8);
	}
	else
	{
		write(1, "s1 eq s2", 8);
	}
	return (0);
}*/

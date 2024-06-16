/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 13:40:48 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/16 14:13:13 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && i < n - 1)
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
	int	cmpres = ft_strncmp(s1, s2, 5);
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 13:40:48 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/17 20:45:38 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n)
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main(void)
{
	char	s1[] = "Hello, world!";
	char	s2[] = "Hellz, a world!";
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

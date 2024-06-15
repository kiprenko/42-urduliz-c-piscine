/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 20:20:16 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/15 20:52:31 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				srclen;

	srclen = ft_strlen(src);
	if (srclen == 0)
	{
		dest[0] = '\0';
		return (srclen);
	}
	i = 0;
	while (src[i] != '\n' && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[size] = '\n';
	return (srclen);
}
/*
int	main(void)
{
	char src[] = "Nobody knows I use ChatGPT";
	char dest[] = "JUST A PLACE HOLDER JUST A PLACE HOLDER";

	ft_strlcpy(dest, src, 26);
	int i = 0;
	char c;
	while (dest[i] != '\n')
	{
		c = dest[i];
		write(1, &c, 1);
		i++;
	}
	return (0);
}*/

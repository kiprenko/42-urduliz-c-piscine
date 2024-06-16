/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 20:20:16 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/16 19:35:52 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srclen;

	srclen = ft_strlen(src);
	if (size > 0)
	{
		i = 0;
		while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srclen);
}
/*
int	main(void)
{
	char src[] = "Nobody knows I use ChatGPT";
	char dest[] = "JUST A PLACE HOLDER JUST A PLACE HOLDER";

	ft_strlcpy(dest, src, 27);
	int i = 0;
	char c;
	while (dest[i] != '\0')
	{
		c = dest[i];
		write(1, &c, 1);
		i++;
	}
	return (0);
}*/

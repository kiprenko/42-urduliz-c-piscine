/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 14:36:26 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/16 15:13:46 by ykiprenk         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	destlen;

	destlen = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[destlen] = src[i];
		destlen++;
		i++;
	}
	dest[destlen] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "Source";
	char	dest[] = "Dest \0     ";
	ft_strcat(dest, src);
	write(1, dest, 12);
	return (0);
}*/

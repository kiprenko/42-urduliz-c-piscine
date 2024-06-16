/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 16:57:37 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/16 17:34:07 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*substr;
	char	*tf;

	if (*to_find == '\0')
	{
		return ((char *) str);
	}
	while (*str != '\0')
	{
		substr = str;
		tf = to_find;
		while (*tf == *substr && *tf != '\0')
		{
			substr++;
			tf++;
		}
		if (*tf == '\0')
		{
			return ((char *) str);
		}
		str++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	str[] = "Nobody knows I use ChatGPT.";
	char	to_find[] = "knows";
	char	*found = ft_strstr(str, to_find);
	while (*found != '\0')
	{
		write(1, found, 1);
		found++;	
	}
}*/

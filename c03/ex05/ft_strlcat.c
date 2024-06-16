/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 17:38:30 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/16 18:22:12 by ykiprenk         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	destlen;
	unsigned int	srclen;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (size <= destlen)
	{
		return (srclen + size);
	}
	i = 0;
	while (src[i] != '\0' && destlen < size - 1)
	{
		dest[destlen++] = src[i++];
	}
	dest[destlen] = '\0';
	return (destlen + srclen);
}
/*
int	main(void)
{
	char dest[20] = "Hello";
    	char src[] = " World!";
    	unsigned int size = sizeof(dest);
    	
	// Initial content of dest
	write(1, "Initial dest content: ", 22);
	write(1, dest, ft_strlen(dest));
	write(1, "\n", 1);
     	
	// Testing ft_strlcat
	unsigned int new_len = ft_strlcat(dest, src, size);
	write(1, "Concatenated dest: ", 19);
	write(1, dest, new_len);
	write(1, "\n", 1);
	
	return 0;
}*/

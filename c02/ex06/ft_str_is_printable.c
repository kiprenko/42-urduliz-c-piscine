/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 18:46:24 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/15 19:16:10 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int				i;
	unsigned char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = (unsigned char) str[i];
		if (c < 32 || c == 127)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main()
{
    char *test = "GJTU\nVKTE";
    
    if (ft_str_is_printable(test))
        write(1, "Y\n", 2);
    else
        write(1, "N\n", 2);

    return 0;
}*/

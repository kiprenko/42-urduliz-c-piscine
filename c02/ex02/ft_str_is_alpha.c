/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 00:17:16 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/14 00:29:28 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c < 65 || c > 122 || (c > 90 && c < 97))
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
    char *test = "HelloWorld";

    if (ft_str_is_alpha(test))
        write(1, "The string is alphabetic.\n", 27);
    else
        write(1, "The string is not alphabetic.\n", 31);

    return 0;
}*/

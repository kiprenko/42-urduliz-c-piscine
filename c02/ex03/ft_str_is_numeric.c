/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 18:46:24 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/15 18:51:55 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c < '0' || c > '9')
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
    char *test = "1234567890";

    if (ft_str_is_numeric(test))
        write(1, "Y\n", 2);
    else
        write(1, "N\n", 2);

    return 0;
}*/

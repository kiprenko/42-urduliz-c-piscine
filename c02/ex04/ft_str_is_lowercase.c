/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 18:46:24 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/15 18:57:04 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c < 'a' || c > 'z')
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
    char *test = "asfdvbzxco";
    
    if (ft_str_is_lowercase(test))
        write(1, "Y\n", 2);
    else
        write(1, "N\n", 2);

    return 0;
}*/

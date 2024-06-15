/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 21:11:11 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/15 21:48:17 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int			i;
	int			dec;
	int			rem;
	unsigned char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = (unsigned char) str[i];
		if (c < 32 || c == 127)
		{
			write(1, "\\0", 2);
			dec = c;
			while (dec != 0)
			{
				rem = dec % 16;
				if (rem < 10)
				{
					c = rem + '0';
					write(1, &c, 1);
				}
				else
				{
					c = rem + 'A' - 10;
					write(1, &c, 1);
				}
				dec /= 16;
			}
		}
		else
		{
			write(1, &c, 1);
		}
		i++;
	}
}

int	main(void)
{
	char	str[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str);
	return (0);
}

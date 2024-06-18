/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 18:26:49 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/18 18:39:47 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	j;

	if (argc < 1)
	{
		return (0);
	}
	argc--;
	while (argc > 0)
	{
		j = 0;
		while (argv[argc][j] != '\0')
		{
			write(1, &argv[argc][j], 1);
			j++;
		}
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}

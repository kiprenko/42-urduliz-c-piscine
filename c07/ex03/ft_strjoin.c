/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 23:30:57 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/19 10:21:53 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

unsigned int	ft_strlen(char * str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

unsigned int	ft_count_cat_len()
{

}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*cat;
	int		catlen;
	int		seplen;
	int		i;
	int		j;
	int		k;
	int		m;

	if (size <= 0)
	{
		cat = (char *) malloc(sizeof(char));
		cat[0] = '\0';
		return (cat);
	}
	seplen = ft_strlen(sep);
	catlen = (size - 1) * seplen + 1;
	i = 0;
	while(i < size)
	{
		catlen += ft_strlen(strs[i]);
		i++;
	}
	cat = (char *) malloc(catlen * sizeof(char));
	if (cat == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while(strs[i][j] != '\0')
		{
			cat[k] = strs[i][j];
			j++;
			k++;
		}
		if (i + 1 < size)
		{
			m = 0;
			while(sep[m] != '\0')
			{
				cat[k] = sep[m];
				m++;
				k++;
			}
		}
		i++;
	}
	cat[k] = '\0';
	return (cat);
}



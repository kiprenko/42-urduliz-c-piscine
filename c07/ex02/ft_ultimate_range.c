/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 23:19:05 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/18 23:29:46 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *) malloc((max - min) * sizeof(int));
	if (*range == NULL)
	{
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}

/*
int main()
{
    int *result;
    int min = 1, max = 5;
    int size = ft_ultimate_range(&result, min, max);

    if (size < 0)
    {
        printf("Memory allocation failed.\n");
    }
    else if (size == 0)
    {
        printf("Invalid range: min >= max.\n");
    }
    else
    {
        printf("Range from %d to %d (excluding %d): ", min, max, max);
        for (int i = 0; i < size; i++)
        {
            printf("%d ", result[i]);
        }
        printf("\n");

        free(result);
    }

    return 0;
}*/

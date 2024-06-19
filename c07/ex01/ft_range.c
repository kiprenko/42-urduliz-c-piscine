/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 23:06:00 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/18 23:14:40 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	range = (int *) malloc((max - min) * sizeof(int));
	if (range == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		range[i] = min++;
		i++;
	}
	return (range);
}
/*
int main()
{
    int *result;
    int min, max;

    // Test 1: Normal case
    min = 1;
    max = 5;
    result = ft_range(min, max);
    if (result != NULL)
    {
        printf("Range from %d to %d (excluding %d): ", min, max, max);
        for (int i = 0; i < max - min; i++)
        {
            printf("%d ", result[i]);
        }
        printf("\n");
        free(result);
    }

    // Test 2: Edge case - single element range
    min = 10;
    max = 11;
    result = ft_range(min, max);
    if (result != NULL)
    {
        printf("Range from %d to %d (excluding %d): ", min, max, max);
        for (int i = 0; i < max - min; i++)
        {
            printf("%d ", result[i]);
        }
        printf("\n");
        free(result);
    }

    // Test 3: Case where min >= max
    min = 5;
    max = 5;
    result = ft_range(min, max);
    if (result == NULL)
    {
        printf("Invalid range: %d >= %d\n", min, max);
    }

    return 0;
}*/

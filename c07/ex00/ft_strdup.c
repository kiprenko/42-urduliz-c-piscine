/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:55:23 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/18 23:04:48 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*dup;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	dup = (char *) malloc((i + 1) * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int main()
{
    char *str1 = "Hello, world!";
    char *str2 = "";
    char *str3 = "This is a test.";

    // Test 1: Normal case
    char *dup1 = ft_strdup(str1);
    printf("Test 1: Original: %s, Duplicate: %s\n", str1, dup1);
    free(dup1);

    // Test 2: Edge case - empty string
    char *dup2 = ft_strdup(str2);
    printf("Test 2: Original: %s, Duplicate: %s\n", str2, dup2);
    free(dup2);

    // Test 3: Long string
    char *dup3 = ft_strdup(str3);
    printf("Test 3: Original: %s, Duplicate: %s\n", str3, dup3);
    free(dup3);

    return 0;
}*/

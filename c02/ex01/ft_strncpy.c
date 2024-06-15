/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 23:14:51 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/14 00:12:48 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main() {
    char dest[20];

    // Test case 1
    ft_strncpy(dest, "Hello, world!", 5);
    printf("Test 1: \"%s\"\n", dest);

    // Test case 2
    ft_strncpy(dest, "Hello, world!", 20);
    printf("Test 2: \"%s\"\n", dest);

    // Test case 3
    ft_strncpy(dest, "Hello", 10);
    printf("Test 3: \"%s\"\n", dest);

    // Test case 4
    ft_strncpy(dest, "", 5);
    printf("Test 4: \"%s\"\n", dest);

    // Test case 5
    ft_strncpy(dest, "A longer string to test", 10);
    printf("Test 5: \"%s\"\n", dest);

    return 0;
}
*/

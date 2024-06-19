/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 23:30:57 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/19 10:54:45 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_count_cat_len(int size, char **strs, char *sep)
{
	int	i;
	int	catlen;

	catlen = (size - 1) * ft_strlen(sep) + 1;
	i = 0;
	while (i < size)
	{
		catlen += ft_strlen(strs[i]);
		i++;
	}
	return (catlen);
}

void	ft_put_sep(int *k, char *cat, char *sep)
{
	int	m;

	m = 0;
	while (sep[m] != '\0')
	{
		cat[*k] = sep[m];
		m++;
		(*k)++;
	}
}

void	ft_join(int size, char **strs, char *sep, char *cat)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			cat[k] = strs[i][j];
			j++;
			k++;
		}
		if (i + 1 < size)
		{
			ft_put_sep(&k, cat, sep);
		}
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*cat;
	int		catlen;

	if (size <= 0)
	{
		cat = (char *) malloc(sizeof(char));
		if (cat == NULL)
		{
			return (NULL);
		}
		cat[0] = '\0';
		return (cat);
	}
	catlen = ft_count_cat_len(size, strs, sep);
	cat = (char *) malloc(catlen * sizeof(char));
	if (cat == NULL)
		return (NULL);
	ft_join(size, strs, sep, cat);
	cat[catlen - 1] = '\0';
	return (cat);
}
/*
int main() {
    // Test Case 1: size = 0, should return an empty string
    char *empty[] = {};
    char *result = ft_strjoin(0, empty, ",");
    printf("Test Case 1: \"%s\"\n", result);
    free(result);

    // Test Case 2: size = 1, single string, 
    // should return the single string without separator
    char *single[] = {"Hello"};
    result = ft_strjoin(1, single, ",");
    printf("Test Case 2: \"%s\"\n", result);
    free(result);

    // Test Case 3: size = 3, multiple strings, 
    // should join strings with separator
    char *multiple[] = {"Hello", "world", "test"};
    result = ft_strjoin(3, multiple, ", ");
    printf("Test Case 3: \"%s\"\n", result);
    free(result);

    // Test Case 4: size = 2, different separator
    char *two[] = {"Hello", "world"};
    result = ft_strjoin(2, two, " + ");
    printf("Test Case 4: \"%s\"\n", result);
    free(result);

    // Test Case 5: size = 0, separator non-empty but no strings to join
    result = ft_strjoin(0, empty, " - ");
    printf("Test Case 5: \"%s\"\n", result);
    free(result);

    // Test Case 6: size = 3, empty separator
    char *three[] = {"This", "is", "test"};
    result = ft_strjoin(3, three, "");
    printf("Test Case 6: \"%s\"\n", result);
    free(result);

    // Test Case 7: size = 3, separator is a space
    result = ft_strjoin(3, three, " ");
    printf("Test Case 7: \"%s\"\n", result);
    free(result);

    return 0;
}
*/

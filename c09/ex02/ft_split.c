/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 15:43:12 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/23 20:05:25 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

unsigned int ft_skip_charset(int start, char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[start] == charset[i] && charset[i] != '\0')
	{
		i++;
		start++;
	}
	if (charset[i] == '\0')
	{
		return (i);
	}
	return (0);
}

unsigned int	ft_count_substrs(char *str, char *charset)
{
	unsigned int	count;
	unsigned int	i;
	unsigned int	skipped;
	unsigned int	substr_start;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		skipped = ft_skip_charset(i, str, charset);
		if (skipped > 0)
		{
			substr_start = i;
			while (skipped > 0)
			{
				i += skipped;
				skipped = ft_skip_charset(i, str, charset);
			}
			if (substr_start > 0)
			{
				count++;
			}
		}
		else if(str[i + 1] == '\0')
		{
			count++;
		}
		i++;
	}
	return (count);
}

void	ft_str_copy_range(int start, int end, char *str, char **copy)
{
	int	i;

	*copy = malloc((end - start + 1) * sizeof(char));
	i = 0;
	while (start < end)
	{
		(*copy)[i] = str[start];
		start++;
		i++;	
	}
	(*copy)[end] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	int	i;
	int	size;
	char	**split;
	int	substr_start;
	int	substr_count;
	int	skipped;

	size = ft_count_substrs(str, charset);
	split = malloc((size + 1) * sizeof(char *));
	i = 0;
	substr_start = 0;
	substr_count = 0;
	while (str[i] != '\0')
	{
		skipped = ft_skip_charset(i, str, charset);
		if (skipped > 0)
		{
			if (i != 0)
			{
				ft_str_copy_range(substr_start, i, str, &split[substr_count]);
				substr_count++;
			}
			while (skipped > 0)
			{
				i += skipped;
				skipped = ft_skip_charset(i, str, charset);
			}
			substr_start = i;
		}
		if (str[i] != '\0')
			i++;
	}
	if (substr_start != i && substr_start != i - 1)
		ft_str_copy_range(substr_start, i, str, &split[substr_count]);
	split[size] = 0;
	return (split);
}

int	main(void)
{
	char *str = "String1<div>String2<div><div><div>String3";
	char *charset = "<div>";
	printf("String is [%s] charset [%s]\n", str, charset);
	char **split = ft_split(str, charset);
	while (*split)
	{
		printf("Substring: %s\n", *split);
		split++;
	}

	str = "String1<div>String2<div>";
	charset = "<div>";
	printf("String is [%s] charset [%s]\n", str, charset);
	split = ft_split(str, charset);
	while (*split)
	{
		printf("Substring: %s\n", *split);
		split++;
	}

	str = "String1<div>String2";
	charset = "<div>";
	printf("String is [%s] charset [%s]\n", str, charset);
	split = ft_split(str, charset);
	while (*split)
	{
		printf("Substring: %s\n", *split);
		split++;
	}

	str = "<div>String1<div>String2";
	charset = "<div>";
	printf("String is [%s] charset [%s]\n", str, charset);
	split = ft_split(str, charset);
	while (*split)
	{
		printf("Substring: %s\n", *split);
		split++;
	}

	str = "<div>String1<div>String2<div>";
	charset = "<div>";
	printf("String is [%s] charset [%s]\n", str, charset);
	split = ft_split(str, charset);
	while (*split)
	{
		printf("Substring: %s\n", *split);
		split++;
	}

	str = "<div>String1<div>String2<div>String3<div>String4<div>";
	charset = "<div>";
	printf("String is [%s] charset [%s]\n", str, charset);
	split = ft_split(str, charset);
	while (*split)
	{
		printf("Substring: %s\n", *split);
		split++;
	}
	return (0);
}

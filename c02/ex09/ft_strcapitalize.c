/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 18:46:24 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/16 19:29:16 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	must_be_capitalized(char c, char pc)
{
	if ((c >= 'a' && c <= 'z')
		&& !(pc >= 'a' && pc <= 'z')
		&& !(pc >= 'A' && pc <= 'Z')
		&& !(pc >= '0' && pc <= '9'))
	{
		return (1);
	}
	return (0);
}

unsigned int	must_be_lowercased(char c, char pc)
{
	if ((c >= 'A' && c <= 'Z')
		&& ((pc >= 'a' && pc <= 'z')
			|| (pc >= 'A' && pc <= 'Z')
			|| (pc >= '0' && pc <= '9')))
	{
		return (1);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	c;
	char	pc;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (i == 0)
		{
			if (c >= 'a' && c <= 'z')
				str[i] = c - 32;
		}
		else
		{
			pc = str[i - 1];
			if (must_be_capitalized(c, pc) == 1)
				str[i] = c - 32;
			else if (must_be_lowercased(c, pc))
				str[i] = c + 32;
		}
		i++;
	}
	return (str);
}
/*
int main()
{
	char test[] = "hello-world!42Goodbye!";
    	int		i;
	char	c;
	
	i = 0;
	ft_strcapitalize(test);
	while (test[i] != '\0')
	{
		c = test[i];
		write(1, &c, 1);
		i++;
	}
	return (0);
}*/

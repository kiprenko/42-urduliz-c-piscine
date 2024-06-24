/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 20:57:46 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/24 21:32:54 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

void	ft_read_file(char *file_name)
{
	int	fdef;
	ssize_t bytes_read;
	char buffer[BUFFER_SIZE];
	int	i;

	fdef = open(file_name, O_RDONLY);
	if (fdef == -1)
	{
		write(1, "Cannot read file.\n", 19);
		return ;
	}
	
	while ((bytes_read = read(fdef, buffer, BUFFER_SIZE - 1)))
	{
		buffer[bytes_read] = '\0';
		i = 0;
		while (buffer[i] != '\0')
		{
			write(1, &buffer[i], 1);
			i++;
		}
	}
	if (bytes_read == -1)
	{
		write(1, "Cannot read file.\n", 19);
		close(fdef);
		return;
	}

	if (close(fdef) == -1)
		write(1, "Cannot read file.\n", 19);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(1, "File name is missing.\n", 22);
		return (0);
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
	ft_read_file(argv[1]);
	
	return (0);
}

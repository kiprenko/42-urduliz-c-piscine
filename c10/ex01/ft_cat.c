/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ykiprenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 20:57:46 by ykiprenk          #+#    #+#             */
/*   Updated: 2024/06/25 21:46:30 by ykiprenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

void	ft_write(char buffer[])
{
	unsigned int	i;

	i = 0;
	while (buffer[i] != '\0')
	{
		write(1, &buffer[i], 1);
		i++;
	}
}

void	ft_read_file(char *file_name)
{
	int		fdef;
	ssize_t	bytes_read;
	char	buffer[BUFFER_SIZE];

	fdef = open(file_name, O_RDONLY);
	if (fdef == -1)
	{
		write(1, "Cannot read file.\n", 18);
		return ;
	}
	bytes_read = read(fdef, buffer, BUFFER_SIZE - 1);
	while (bytes_read > 0)
	{
		buffer[bytes_read] = '\0';
		ft_write(buffer);
		bytes_read = read(fdef, buffer, BUFFER_SIZE - 1);
	}
	if (bytes_read == -1)
	{
		write(1, "Cannot read file.\n", 18);
		close(fdef);
		return ;
	}
	if (close(fdef) == -1)
		write(1, "Cannot read file.\n", 18);
}

void	ft_process_input()
{

}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_process_input();
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	ft_read_file(argv[1]);
	return (0);
}

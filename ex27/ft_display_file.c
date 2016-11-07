/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 12:24:46 by ajouanna          #+#    #+#             */
/*   Updated: 2016/11/04 16:46:38 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 4096

int		my_strlen(char *str)
{
	int res;

	res = 0;
	if (str)
	{
		while (str[res])
		{
			res++;
		}
	}
	return (res);
}

void	my_putstr(int fd, char *str)
{
	write(fd, str, my_strlen(str));
}

int		display_file(char *filename)
{
	char	buf[BUFFER_SIZE + 1];
	int		fd;
	int		ret;

	if ((fd = open(filename, O_RDONLY)) == -1)
	{
		my_putstr(2, "Error opening file.\n");
		return (1);
	}
	while ((ret = read(fd, buf, BUFFER_SIZE)))
	{
		if (ret == -1)
		{
			my_putstr(2, "Error reading file.\n");
			break ;
		}
		buf[ret] = 0;
		my_putstr(1, buf);
	}
	if (close(fd) == -1)
	{
		my_putstr(2, "Error closing file.\n");
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		my_putstr(2, "File name missing.\n");
		return (-1);
	}
	if (argc > 2)
	{
		my_putstr(2, "Too many arguments.\n");
		return (-1);
	}
	return (display_file(argv[1]));
}

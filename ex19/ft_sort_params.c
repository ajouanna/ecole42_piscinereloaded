/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:06:30 by ajouanna          #+#    #+#             */
/*   Updated: 2016/11/03 17:35:39 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	my_putstr(char *str)
{
	if (str)
	{
		while (*str)
		{
			ft_putchar(*str);
			str++;
		}
	}
}

int		my_strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	sort_arg(int argc, char **argv)
{
	int		i;
	int		sort;
	char	*temp;

	sort = 1;
	while (sort)
	{
		sort = 0;
		i = 1;
		while (i < (argc - 1))
		{
			if (my_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
				sort = 1;
			}
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	int i;

	if (argc > 1)
	{
		sort_arg(argc, argv);
		i = 1;
		while (i < argc)
		{
			my_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
}

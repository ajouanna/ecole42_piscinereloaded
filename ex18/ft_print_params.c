/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 16:44:59 by ajouanna          #+#    #+#             */
/*   Updated: 2016/11/03 16:50:46 by ajouanna         ###   ########.fr       */
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

int		main(int argc, char **argv)
{
	int i;

	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			my_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
}

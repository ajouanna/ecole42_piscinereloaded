/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:22:33 by ajouanna          #+#    #+#             */
/*   Updated: 2016/11/04 15:35:32 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f) (char *))
{
	int i;
	int res;

	i = 0;
	res = 0;
	while (tab[i])
	{
		if (f(tab[i]) == 1)
			res++;
		i++;
	}
	return (res);
}
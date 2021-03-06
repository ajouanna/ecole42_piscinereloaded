/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:44:45 by ajouanna          #+#    #+#             */
/*   Updated: 2016/11/03 15:46:28 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 17:55:20 by ajouanna          #+#    #+#             */
/*   Updated: 2016/11/04 17:37:39 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int len;
	int i;
	int *res;

	if (min >= max)
		return (NULL);
	len = max - min;
	res = malloc(sizeof(char) * len);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = min + i;
		i++;
	}
	return (res);
}

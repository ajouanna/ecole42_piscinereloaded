/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 14:21:35 by ajouanna          #+#    #+#             */
/*   Updated: 2016/11/03 14:47:34 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 ** si n > 12 on depasse la taille max d un entier, c est donc un cas d erreur
*/

int	ft_iterative_factorial(int nb)
{
	int res;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 12)
		return (0);
	res = nb;
	while (--nb)
	{
		res *= nb;
	}
	return (res);
}

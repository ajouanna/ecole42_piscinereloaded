/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajouanna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 15:05:07 by ajouanna          #+#    #+#             */
/*   Updated: 2016/11/03 15:10:28 by ajouanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 ** si n > 12 on depasse la taille max d un entier, c est donc un cas d erreur
*/

int	ft_recursive_factorial(int nb)
{
	int res;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 12)
		return (0);
	res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}

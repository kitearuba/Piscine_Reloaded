/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:37:19 by chrrodri          #+#    #+#             */
/*   Updated: 2024/06/06 15:39:49 by chrrodri         ###   ########.fr       */
/*      								      */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int		res;

	res = 1;
	if (nb > 12 || nb < 0)
		return (0);
	else
	{
		while (nb > 0)
		{
			res *= nb;
			nb--;
		}
		return (res);
	}
}

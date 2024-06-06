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
	int	result;
	int	i;

	result = nb - 1;
	i = 0;
	while (result != 0)
	{
		nb *= result;
		result--;
	}
	return (nb);
}

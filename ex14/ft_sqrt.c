/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:41:51 by chrrodri          #+#    #+#             */
/*   Updated: 2024/06/10 12:06:24 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	root;

	root = 0;
	if (nb == 0)
		return (0);
	while ((root * root) < nb)
		root++;
	if ((root * root) == nb)
		return (root);
	else
		return (0);
}

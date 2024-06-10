/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:41:51 by chrrodri          #+#    #+#             */
/*   Updated: 2024/06/10 12:03:26 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "utils.h"

int	ft_sqrt(int nb)
{
	int	root;

	root = 0;
	if(nb == 0)
		return (0);
	while((root * root) < nb)
		root++;
	if((root*root) == nb)
		return (root);
	else
		return (0);
}

int	main(int argc, char **argv)
{
	int	result;
	if (argc < 2)
	{
		write (2, "Error wrong input!\n", 18);
		return (1);
	}
	result = ft_atoi(argv[1]);
	ft_putnbr(result);
	ft_putchar('\n');
	result = ft_sqrt(result);
	ft_putnbr(result);
	return (0);
}

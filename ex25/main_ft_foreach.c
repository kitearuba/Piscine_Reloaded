/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 18:10:46 by chrrodri          #+#    #+#             */
/*   Updated: 2024/06/10 15:17:15 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "utils.h"

void	ft_foreach(int *tab, int length, void (*f)(int));

int	main(int argc, char **argv)
{
	int	len;
	int	arr[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };

	if (argc < 2)
	{
		write (2, "Error, wrong input!\n",20);
		return (1);
	}
	len = ft_atoi(argv[1]);
	ft_foreach(arr, len, &ft_putnbr);
	return (0);
}

void ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
		ft_putchar('\n');
	}
}

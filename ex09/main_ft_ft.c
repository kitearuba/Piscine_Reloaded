/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 09:54:00 by chrrodri          #+#    #+#             */
/*   Updated: 2024/06/06 10:19:41 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr > 9)
		ft_putnbr(nbr%10);
	ft_putchar(nbr + 47);
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	x;
	int	*nbr;

	x = 0;
	nbr = &x;
	ft_ft(nbr);
	printf("%d", *nbr);
	return (0);
}

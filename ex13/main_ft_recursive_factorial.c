/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:59:15 by chrrodri          #+#    #+#             */
/*   Updated: 2024/06/06 15:08:52 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "utils.h"

void	ft_putchar(char c);
void	ft_putnbr(int num);
int 	ft_atoi(char *str);

int	ft_recursive_factorial(int nb)
{
	if(nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}			

int	main(int argc, char **argv)
{
	int	x;

	if (argc < 2)
	{
		write(2,"Error, no value added!\n", 22);
		return (1);
	}
	x = ft_recursive_factorial(ft_atoi(argv[1]));
	ft_putnbr(x);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_iterative_factorial.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 10:37:19 by chrrodri          #+#    #+#             */
/*   Updated: 2024/06/06 15:37:02 by chrrodri         ###   ########.fr       */
/*      								      */
/* ************************************************************************** */

#include <unistd.h>
#include "utils.h"

void	ft_putchar(char c);
void	ft_putnbr(int num);
int 	ft_atoi(char *str);

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

int	 main(int argc, char **argv)
{
	int	x;

	if(argc < 2)
	{
		write (2, "Error, no data added!\n", 22);
		return (1);
	}
	x = ft_iterative_factorial(ft_atoi(argv[1]));
	ft_putnbr(x);
	return (0);
}
	

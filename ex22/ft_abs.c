/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 13:20:12 by chrrodri          #+#    #+#             */
/*   Updated: 2024/06/12 13:37:30 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "utils.h"
#include "ft_abs.h"

int	main(int argc, char **argv)
{
	int	val1;
	int	val2;

	if (argc < 2)
	{
		write (2, "Error!\n", 7);
		return (1);
	}
	val1 = ABS(ft_atoi(argv[1]));
	val2 = ABS(ft_atoi(argv[2]));
	ft_putnbr(val1);
	ft_putchar('\n');
	ft_putnbr(val2);
	ft_putchar('\n');
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:27:02 by chrrodri          #+#    #+#             */
/*   Updated: 2024/06/06 17:40:33 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "utils.h"

void	ft_putchar(char c);

void	ft_putnbr(int num);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	ft_putnbr(ft_strlen(argv[1]));
	return (0);
}

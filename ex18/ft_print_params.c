/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:05:20 by chrrodri          #+#    #+#             */
/*   Updated: 2024/06/12 18:11:35 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_params(char *str);

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 2)
	{
		return (1);
	}
	while (argv[i] != NULL)
	{
		ft_print_params(argv[i]);
		i++;
	}
	return (0);
}

void	ft_print_params(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

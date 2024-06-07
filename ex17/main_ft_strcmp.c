/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 17:44:21 by chrrodri          #+#    #+#             */
/*   Updated: 2024/06/07 13:52:36 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "utils.h"

void	ft_putchar(char c);
void	ft_putnbr(int num);
int 	ft_atoi(char *str);

int ft_strcmp(char *s1, char *s2)
{
	int	i;
	char	result;

	i = 0;
	result = 0;
	while(s1[i] == s2[i])
	{
		i++;	
		if (s1[i] == '\0' && s2[i] == '\0') 
		{
			result = 0;
			return (0);
		}
	}
	if(s1[i] != s2[i])
		result = (s1[i] - s2[i]);
	return (result);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(2, "Error, wrong input!\n", 20);
		return (1);
	}
	ft_putnbr(ft_strcmp(argv[1], argv[2]));
	return (0);
}
	

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:50:47 by chrrodri          #+#    #+#             */
/*   Updated: 2024/06/07 18:00:45 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "utils.h"

void	ft_putchar(char c);

void	ft_putnbr(int num);

int 	ft_atoi(char *str);

int	*ft_range(int min, int max);

int	main(int argc, char **argv)
{	
	int	min;
	int	max;
	int	size;
	int	i;

	if (argc < 2)
	{
		write(2, "Error, wrong input!\n", 20);
		return (1);
	}
	min = ft_atoi(argv[1]);
	max = ft_atoi(argv[2]);
	size = max - min;
	i = 0;
	int	*array = ft_range(min, max);
	while (array[i] < 20)
	{
		ft_putnbr(array[i]);
		i++;
	}
	free (array);
	return (0);
}

int	*ft_range(int min, int max)
{
	int	size;
	int	*array;
	int	i;

	size = max - min;
	i = 0;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
 	{
		write (2,"Memory allocation failed.\n", 27);
		return (NULL);
	}
	while (i < size)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}

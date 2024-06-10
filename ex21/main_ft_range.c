/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:50:47 by chrrodri          #+#    #+#             */
/*   Updated: 2024/06/10 12:36:57 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "utils.h"
#include <stdlib.h>

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
	while (i < size)
	{
		ft_putnbr(array[i]);
		i++;
		ft_putchar('\n');
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
	if (min >= max)
		return (NULL);
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

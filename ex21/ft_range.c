/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 16:50:47 by chrrodri          #+#    #+#             */
/*   Updated: 2024/06/11 13:49:57 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*array;
	int	i;

	size = max - min;
	i = 0;
	if (min >= max)
		return (NULL);
	array = (int *)malloc(sizeof(int) * size);
	if (array == NULL)
	{
		write (2, "Memory allocation failed.\n", 27);
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

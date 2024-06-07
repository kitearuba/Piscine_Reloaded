/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:16:11 by chrrodri          #+#    #+#             */
/*   Updated: 2024/06/07 16:48:54 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*target;

	i = 0;
	target = malloc (sizeof(char) * sizeof(src));
	if (target == NULL)
	{
		write(2, "Memory allocation failed.\n", 26);
		return ("1");
	}
	while (src[i] != '\0')
	{
		target[i] = src[i];
		i++;
	}
	return (target);
}

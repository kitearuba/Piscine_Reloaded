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

int ft_strlen(char *str)
{
    int length = 0;
    while (str[length] != '\0')
        length++;
    return length;
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*target;
	int	length;

	length = ft_strlen(src);
	i = 0;
	target = (char *)malloc (sizeof(char) * (length + 1));
	if (target == NULL)
	{
		write(2, "Memory allocation failed.\n", 26);
		return (NULL);
	}
	while (src[i] != '\0')
	{
		target[i] = src[i];
		i++;
	}
	target[i] = '\0';
	return (target);
}

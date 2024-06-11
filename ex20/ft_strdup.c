/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:16:11 by chrrodri          #+#    #+#             */
/*   Updated: 2024/06/11 13:47:30 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c);

char	*ft_strdup(char *src);

char	*ft_strdup(char *src)
{
	char	*target;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (src[len] != '\0')
		len++;
	target = (char *)malloc (sizeof(char) * (len + 1));
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

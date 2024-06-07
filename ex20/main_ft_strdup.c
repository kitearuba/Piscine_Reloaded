/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 15:16:11 by chrrodri          #+#    #+#             */
/*   Updated: 2024/06/07 16:47:08 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "utils.h"

void	putstr(char *str);

void	ft_putchar(char c);

char	*ft_strdup(char *src);

int	main(int argc, char **argv)
{
	char	*target;

	if (argc < 2)
	{
		write(2, "Error, wrong input!\n", 20);
		return (1);
	}
	target = ft_strdup(argv[1]);
	ft_putstr(target);
	ft_putchar('\n');
	free (target);
	return (0);
}

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

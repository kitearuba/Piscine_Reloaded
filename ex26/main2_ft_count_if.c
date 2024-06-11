/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 18:11:24 by chrrodri          #+#    #+#             */
/*   Updated: 2024/06/11 15:15:05 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "utils.h"

int ft_is_even(char *str)
{
    int i;

    i = 0;
    if (str[i] == '\0')
        return (0);
    while (str[i] != '\0')
    {
        if (str[i] % '0' != '2')
            return (0);
        i++;
    }
    return (1);
}

int	ft_count_if(char **tab, int (*f)(char*));

int	main(void)
{
	int	count;

	char *arr[] = {"2", "", "0", "4", "12365", "e3", NULL}; 	
	count = ft_count_if(arr, &ft_is_even);
	ft_putnbr(count);
	ft_putchar('\n');
	return (0);
}

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (*tab) 
	{
		if ((*f)(*tab) == 1)
			counter++;
		tab++;
	}
	return (counter);
}

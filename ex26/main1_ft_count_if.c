/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 18:11:24 by chrrodri          #+#    #+#             */
/*   Updated: 2024/06/11 14:57:03 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "utils.h"

int ft_is_digit_only(char *str)
{
    int i = 0;

    if (str[i] == '\0')
        return (0);
    while (str[i] != '\0')
    {
        if (str[i] < '0' || str[i] > '9')
            return (0);
        i++;
    }
    return (1);
}

int	ft_count_if(char **tab, int (*f)(char*));

int	main(void)
{
	int	count;

	char *arr[] = {"1", "", "0", "x", "12365", "e3", NULL}; 	
	count = ft_count_if(arr, &ft_is_digit_only);
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

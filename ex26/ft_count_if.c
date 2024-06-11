/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 18:11:24 by chrrodri          #+#    #+#             */
/*   Updated: 2024/06/10 17:07:32 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

// Function prototype for ft_count_if
int ft_count_if(char **tab, int (*f)(char*));

// Function that checks if the string contains only digits
int ft_is_digit_only(char *str)
{
    int i = 0;

    if (str[i] == '\0')
        return (0);

    while (str[i] != '\0')
    {
        if (!isdigit(str[i]))
            return (0);
        i++;
    }
    return (1);
}

// Function that counts how many strings in the array return 1 when passed to f
int ft_count_if(char **tab, int (*f)(char*))
{
    int i;
    int counter;

    i = 0;
    counter = 0;
    while (tab[i] != NULL)
    {
        if ((*f)(tab[i]) == 1)
            counter++;
        i++;
    }
    return (counter);
}

int main(void)
{
    char *arr[] = {"1", "", "24", "x", "12365", "e3", NULL}; 
    int count = ft_count_if(arr, &ft_is_digit_only);
    printf("Count of digit-only strings: %d\n", count);
    return (0);
}

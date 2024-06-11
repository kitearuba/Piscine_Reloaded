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

// Function prototype for ft_count_if
int ft_count_if(char **tab, int (*f)(char*));

// Example function that checks if the string is non-empty
int ft_check_content(char *str)
{
    return (*str != '\0');
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
    int count = ft_count_if(arr, &ft_check_content);
    printf("Count of non-empty strings: %d\n", count);
    return (0);
}
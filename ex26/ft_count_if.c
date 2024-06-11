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

##include <unistd.h>

// Function that checks if the string contains only digits
int ft_is_digit_only(char *str)
{
    int i;

    i = 0;
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

// Function that counts how many strings in the array return 1 when passed to f
int ft_count_if(char **tab, int (*f)(char*))
{
    int i;
    int counter;

    i = 0;
    counter = 0;
    while (tab[i] != 0)
    {
        if (f(tab[i]) == 1)
            counter++;
        i++;
    }
    return (counter);
}

// Main function for testing
int main(void)
{
    char *arr[] = {"1", "", "24", "x", "12365", "e3", 0}; 
    int count;

    count = ft_count_if(arr, &ft_is_digit_only);
    return (count);
}
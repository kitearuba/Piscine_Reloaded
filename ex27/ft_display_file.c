/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chrrodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 19:30:56 by chrrodri          #+#    #+#             */
/*   Updated: 2024/06/11 19:32:34 by chrrodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 4096

void display_file(const char *filename)
{
    int fd;
    char buffer[BUFFER_SIZE];
    ssize_t bytes_read;

    fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        write(2, "Cannot read file.\n", 18);
        return;
    }

    while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        write(1, buffer, bytes_read);
    }

    close(fd);
}

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        write(2, "File name missing.\n", 19);
        return 1;
    }
    else if (argc > 2)
    {
        write(2, "Too many arguments.\n", 20);
        return 1;
    }
    else
    {
        display_file(argv[1]);
    }
    return 0;
}




/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <mamali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 18:27:59 by mamali            #+#    #+#             */
/*   Updated: 2021/01/16 19:49:24 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3D.h"
void    get_coordinates_of_resolution(char  **format)
{   
    if (!strcmp("R", format[0]))
    {
        g_inf.xresolution = ft_atoi(format[1]);
        g_inf.yresolution = ft_atoi(format[2]);
        printf("%d\n%d\n", g_inf.xresolution, g_inf.yresolution);
    }
    else
        ft_puterror("Invalid Coordinates Of Resolutions!");
}
void    checkifvalidresolution(char     **format)
{
    int     i;
    int     j;

    i = 0;
    j = 0;
    while (format[i][j])
    {
        if (format[i][j] < '0' || format[i][j] > '9')
            ft_puterror("Invalid Coordinates Of Resolutions!");
        j++;
    }
}
void    treat_resolution(int    fd, char    *line)
{
    int     i;
    int     j;
    char    **format;
    
    i = 0;
    j = 0;
    format = NULL;
    get_next_line(fd, &line);
    if (line[0] == ' ')
        ft_puterror("Invalid File!");
    format = ft_split(line, ' ');
    while (format[i])
        i++;
    if (i != 3)
        ft_puterror("Invalid File!");
    i = 1;
    while (format[i++])
        checkifvalidresolution(format);
    get_coordinates_of_resolution(format);
    free(format);
}
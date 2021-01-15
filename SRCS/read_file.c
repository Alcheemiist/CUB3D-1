/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <mamali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 18:27:59 by mamali            #+#    #+#             */
/*   Updated: 2021/01/15 19:53:16 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3D.h"

int    check_if_valid_resolution(int    fd, char    *line)
{
    int     i;
    int     j;

    i = 0;
    j = 0;
    if (!(strcmp(line, " ")))
        ft_puterror("Invalid File !");
    else
    {
        format = ft_split(line, ' ');
        while (format[i++])
        if (i != 3)
            ft_puterror("Invalid Coordinates Of Resolutions!");
        i = 1;
        while (format[i++])
        {
            while (format[i][j])
            {
                if (format[i][j] < '0' || format[i][j] > '9')
                    ft_puterror("Invalid Coordinates Of Resolutions!");
                j++;
            }
            j = 0;
        }
        return (1);
    }
    return (0);
}

void    treat_resolution(int    fd, char    *line)
{
    format = NULL;
    if (check_if_valid_resolution(fd, line))
    {
        if (!strcmp("R", &line[0]))
        {
            g_inf.xresolution = ft_atoi(&line[1]);
            g_inf.yresolution = ft_atoi(&line[2]);
            printf("%d\n%d\n", g_inf.xresolution, g_inf.yresolution);
        }
        else
            ft_puterror("Invalid Coordinates Of Resolutions!");
    }
}
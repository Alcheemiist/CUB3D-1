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
        g_info.xResolution = ft_atoi(format[1]);
        g_info.yResolution = ft_atoi(format[2]);
        printf("%d\n%d\n", g_info.xResolution, g_info.yResolution);
    }
    else
        ft_puterror("Invalid Coordinates Of Resolutions!");
}
void    checkifvalidresolution(int      i, int      j, char     **format)
{
    while (format[i][j])
    {
        if (format[i][j] < '0' || format[i][j] > '9')
            ft_puterror("Invalid Coordinates Of Resolutions!");
        j++;
    }
}

void    readfile(int    argc, char    **argv)
{
    int     fd;
    char    *line;
    int     i;

    i = 1;
    checkArgs(argc, argv);
    if (!(fd = open(argv[1], O_RDONLY))) // still to check file is valid means it end ".cub"
      ft_puterror("invalid file");

    while (i != 0)
    {
        i = get_next_line(fd, &line);
        if (i < 0)
             break;
        checkLine(line);
    }
       /* int     i;
    int     j;
    char    **format;
    
    i = 0;
    j = 0;
    format = NULL;
    if (!(ft_strncmp(line, " ", ft_strlen(line))))   
        ft_puterror("Invalid File!");
    format = ft_split(line, ' ');
    printf("%s\n", format[1]);
    while (format[i])
    {
        i++;
    }
    if (i != 3)
        ft_puterror("Invalid File!");
    i = 1;
    while (format[i++])
        checkifvalidresolution(i, j, format);
    get_coordinates_of_resolution(format);*/
}

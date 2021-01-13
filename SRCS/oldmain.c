/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   oldmain.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <mamali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 19:36:55 by mamali            #+#    #+#             */
/*   Updated: 2021/01/13 19:36:59 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3D.h"

int main()
{
    int     fd;
    char    *line;
    char    **tab;
    char    **tab1;
    char    *tab2;

    fd = open("file.cub", O_RDONLY);
    
    while (get_next_line(fd, &line))
    {
        tab = ft_split(line, ' ');
        tab2 = ft_strdup(line);
        if (!strcmp(tab[0], "SO") || !strcmp(tab[0], "NO") || !strcmp(tab[0], "WE") || !strcmp(tab[0], "EA") || !strcmp(tab[0], "S") || !strcmp(tab[0], "R"))
        {
            if (!strcmp(tab[0], "R"))
            {
                inf.height = ft_atoi(tab[1]);
                inf.width =  ft_atoi(tab[2]);
                printf("|%d | %d\n",inf.height,inf.width);
            }
            else if (!strcmp(tab[0], "NO"))
            {
                inf.nopath = tab[1];
                printf("%s\n", inf.nopath);
            }
            else if (!strcmp(tab[0], "SO"))
            {
                inf.sopath = tab[1];
                printf("%s\n", inf.sopath);
            }
            else if (!strcmp(tab[0], "WE"))
            {
                inf.wepath = tab[1];
                printf("%s\n", inf.wepath);
            }
            else if (!strcmp(tab[0], "EA"))
            {
                inf.eapath = tab[1];
                printf("%s\n", inf.eapath);
            }
            else if (!strcmp(tab[0], "S"))
            {
                inf.spath = tab[1];
                printf("%s\n", inf.spath);
            }
        }
        else if (!strcmp(tab[0], "F") || !strcmp(tab[0], "C"))
        {
            tab1 = ft_split(tab[1], ',');
            if (!strcmp(tab[0], "F"))
            {
                inf.rf = ft_atoi(tab1[0]);
                inf.gf = ft_atoi(tab1[1]);
                inf.bf = ft_atoi(tab1[2]);
                printf("%d\n%d\n%d\n", inf.rf, inf.gf, inf.bf);
            }
            else
            {
                inf.rc = ft_atoi(tab1[0]);
                inf.gc= ft_atoi(tab1[1]);
                inf.bc = ft_atoi(tab1[2]);
                printf("%d\n%d\n%d\n", inf.rc, inf.gc, inf.bc);             
            } 
        }
        else
        {
            inf.line = tab2;
            printf("{%s}\n", inf.line);
        }
    }
    tab2 = ft_strdup(line);
    printf("{%s}\n", inf.line);
    return(0);
}

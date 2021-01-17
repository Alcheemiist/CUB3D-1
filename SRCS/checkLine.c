#include "../include/cub3D.h"
int     lineIsDigit(char    **str)
{
    int     i;
    int     j;

    i = 0;
    j = 0;
    while (str[i])
    {
        while (str[i][j])
        {
            if (!(ft_isdigit(str[i][j])))
                ft_puterror("Invalid Coordinates!");
            j++;
        }
        j = 0;
        i++;
    }
    return(i);
}
void    getResolution(char     *line)
{
    char    **str;
    str = ft_split(line, ' ');
    if (str[0][0] == '-' || str[1][0] == '-')
        ft_puterror("Invalid Coordinates!");
    if (lineIsDigit(str) != 2)
        ft_puterror("Invalid Coordinates!");
    g_info.xResolution = ft_atoi(str[0]);
    g_info.yResolution = ft_atoi(str[1]);
    printf("%d\n%d\n", g_info.xResolution, g_info.yResolution);
}
void    checkline(char  *line)
{
    int     i;

    i = 0;
    while (line[i] != ' ')
        i++;
    if (line[i] == 'R' && line[++i] == ' ')
        getResolution(line);
}
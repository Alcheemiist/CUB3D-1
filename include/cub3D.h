#ifndef CUB3D_H
# define CUB3D_H

//# include <mlx.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <math.h>
# include "../mylibft/libft.h"

# define WIN_SIZE 500

typedef struct s_data
{
    int     xResolution;
    int     yResolution;
}               t_data;

t_data          g_info;

/*
typedef struct s_data {
    void    *img;
    char    *addr;
    int     bits_per_pixel;
    int     line_length;
    int     endian;   
}           t_data;
*/

void	    ft_puterror(char *error);
void    readfile(int    argc, char    **argv);
void    checkArgs(int  argc, char  **argv);
void    checkSecArg(char   *argv);
void    checkExtension(char *argv);
void    checkArgsNumber(int     argc);
void    checkLine(char  *line);
int     lineIsDigit(char    **str);
void    getResolution(char     *line);

#endif
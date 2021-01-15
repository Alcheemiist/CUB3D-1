#ifndef CUB3D_H
# define CUB3D_H

# include <mlx.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <math.h>
# include "../get_next_line/get_next_line.h"
# include "../libft/libft.h"

# define WIN_SIZE 500

typedef struct s_data
{
    int     xresolution;
    int     yresolution;
}               t_data;

t_data          g_inf;
/*
typedef struct s_data {
    void    *img;
    char    *addr;
    int     bits_per_pixel;
    int     line_length;
    int     endian;   
}           t_data;
*/

char    **format;

int	    ft_puterror(char *error);
int	    quit(void);
void    treat_resolution(int    fd, char    *line);
int     check_if_valid_resolution(int    fd, char    *line);

#endif
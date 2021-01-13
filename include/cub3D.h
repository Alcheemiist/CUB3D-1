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
    int     height;
    int     width;
    char    *nopath;
    char    *sopath;
    char    *wepath;
    char    *eapath;
    char    *spath;
    int     rf;
    int     gf;
    int     bf;
    int     rc;
    int     gc;
    int     bc;
    char    *line;
}               t_data;

typedef struct s_data {
    void    *img;
    char    *addr;
    int     bits_per_pixel;
    int     line_length;
    int     endian;   
}           t_data;

t_data inf;

int	ft_puterror(char *error);
int	quit(void);

#endif
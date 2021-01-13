#ifndef CUB3D_H
# define CUB3D_H

# include <mlx.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <math.h>
# include "./get_next_line/get_next_line.h"

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

t_data inf;

char				**ft_split(char *s, char c);
int			        ft_atoi(const char *str);
char	            *ft_substr(char const *s, unsigned int start, size_t len);
int		            ft_strlen(const char *s);
int		            ft_strcmp(char *s1, char *s2);

#endif
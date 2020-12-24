#include <fcntl.h>
#include "cub.h"

int main()
{
    int i = 0;
    int fd  ;
    char    *resolution;
    char    *line;
    char    **tab;

    fd = open("file.cub", O_RDONLY);
    get_next_line(fd, &line);    
    tab = ft_split(line, ' ');
    if (tab[0][0] == 'R')
    {
        g_data.height = ft_atoi(tab[1]);
        g_data.width = ft_atoi(tab[2]);
    }
    return(0);
}
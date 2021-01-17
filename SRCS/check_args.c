#include "../include/cub3D.h"

void    checkArgsNumber(int     argc)
{
    if (argc > 3 || argc < 2)
        ft_puterror("you should have at least 2 or 3 arguments!");
}

void    checkExtension(char *argv)
{
    char    *p;
    p = ft_strrchr(argv, '.');
    if (!(ft_strncmp(p, ".cub", ft_strlen(p))))
        ft_puterror("Invalid Extension\n");
}

void    checkSecArg(char   *argv)
{
    if (!(strncmp(argv, "--save", ft_strlen(argv))))
        ft_puterror("ERROR");
}

void    checkArgs(int  argc, char  **argv)
{
    checkArgsNumber(argc);
    checkExtension(argv[1]);
    checkSecArg(argv[2]);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <mamali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/18 19:35:49 by mamali            #+#    #+#             */
/*   Updated: 2021/01/13 19:22:46 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

int	quit(void)
{
	exit(1);
	return (-1);
}

int	ft_puterror(char *error)
{
	char *e;
	e = "\033[1;31m Error\n >> \033[0;31m";
	write(1, e, ft_strlen(e));
	write(1, error, ft_strlen(error));
	write(1, "\n", 1);
	return (quit());
}

typedef struct s_data {
    void    *img;
    char    *addr;
    int     bits_per_pixel;
    int     line_length;
    int     endian;   
}           t_data;

int     main(int    argc, char **argv)
{
    int     fd;
    int     i;
    char    *line;
    
    if (argc != 2 || argc != 3)
        return(ft_puterror("you should have at least 2 or 3 arguments!"));
    if (!(fd = open(argv[1], O_RDONLY))) // still to check file is valid means it end ".cub"
        return(ft_puterror("invalid file"));
    while ((i = get_next_line(fd, &line)) >= 0) 
    {
        printf("%c\n",  line[0]);
        // if (line[0] == 'R')
        //     set_resultion(line);   
    }
    void*       mlx_window;
    void*       mlx;

 
    mlx = mlx_init();
    mlx_window = mlx_new_window(mlx, 500, 500, "HELLO WORLD!");
    //mlx_pixel_put(mlx, mlx_window, 250, 250, 0xFFFFFF);
    /*img.img = mlx_new_image(mlx, WIN_SIZE, WIN_SIZE);
    img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
    img.img[500] = 0xFFFFFF;*/
    int j = 100;
    while (j-- > 0)
    {
        mlx_pixel_put(mlx, mlx_window, j, j, 0xFFF);
    }
    /*mlx_put_image_to_window(mlx, mlx_window, img.img, 0, 0);*/
    mlx_loop(mlx);
}
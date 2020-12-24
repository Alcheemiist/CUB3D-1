/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <mamali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/18 19:35:49 by mamali            #+#    #+#             */
/*   Updated: 2020/12/24 16:42:56 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

typedef struct s_data {
    void    *img;
    char    *addr;
    int     bits_per_pixel;
    int     line_length;
    int     endian;   
}           t_data;

int     main()
{
    void*       mlx_window;
    void*       mlx;
    t_data      img;

    mlx = mlx_init();
    mlx_window = mlx_new_window(mlx, WIN_SIZE, WIN_SIZE, "HELLO WORLD!");
    img.img = mlx_new_image(mlx, WIN_SIZE, WIN_SIZE);
    img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
    //img.img[500] = 0xFFFFFF;
    int i = 100;
    while (i++ < 150)
    {
        mlx_pixel_put(mlx, mlx_window, i, i, 0x565425);    
    }
    //mlx_put_image_to_window(mlx, mlx_window, img.img, 0, 0);
    mlx_loop(mlx);
}
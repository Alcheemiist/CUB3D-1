/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <mamali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 18:25:29 by mamali            #+#    #+#             */
/*   Updated: 2021/01/15 18:25:30 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/cub3D.h"

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
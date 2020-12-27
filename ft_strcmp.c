/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <mamali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 19:04:39 by mamali            #+#    #+#             */
/*   Updated: 2020/12/24 19:16:06 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub.h"

int		ft_strcmp(char *s1, char *s2)
{
	unsigned char	*p;
	unsigned char	*o;

	o = (unsigned char *)s1;
	p = (unsigned char *)s2;
	while (*o || *p)
	{
		if (*o != *p)
			return (*o - *p);
		else
		{
			o++;
			p++;
		}
	}
	return (0);
}

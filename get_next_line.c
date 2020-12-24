/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 17:35:16 by mamali            #+#    #+#             */
/*   Updated: 2019/11/25 15:53:24 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*fct(char *save, char **line)
{
	char *str;

	str = NULL;
	if (save)
	{
		if ((str = ft_strchr(save, '\n')))
		{
			*str = '\0';
			*line = ft_strdup(save);
			ft_strcpy(save, ++str);
		}
		else
		{
			*line = ft_strdup(save);
			save = NULL;
		}
	}
	else
		*line = ft_calloc(1, 1);
	return (str);
}

void	fct3(char *buff, char **line)
{
	char *tmp;

	tmp = *line;
	*line = ft_strjoin(tmp, buff);
	free(tmp);
}

int		fct2(char **save, char *buff, int fd, char **line)
{
	int		size_read;
	char	*str;

	str = fct(*save, line);
	while (!str)
	{
		if ((size_read = (read(fd, buff, BUFFER_SIZE))) == 0)
		{
			free(buff);
			free(*save);
			*save = NULL;
			return (0);
		}
		*(buff + size_read) = '\0';
		if ((str = ft_strchr(buff, '\n')))
		{
			*str++ = '\0';
			free(*save);
			*save = ft_strdup(str);
		}
		fct3(buff, line);
	}
	free(buff);
	return (1);
}

int		get_next_line(int fd, char **line)
{
	static char	*save;
	char		*buff;

	if ((read(fd, NULL, 0) != 0) || fd < 0)
		return (-1);
	if (BUFFER_SIZE >= 2147483647 || BUFFER_SIZE <= 0)
		return (-1);
	if (!(buff = malloc(BUFFER_SIZE + 1)))
		return (-1);
	return (fct2(&save, buff, fd, line));
}

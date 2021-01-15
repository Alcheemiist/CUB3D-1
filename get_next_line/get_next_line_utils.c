/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <mamali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 21:21:22 by mamali            #+#    #+#             */
/*   Updated: 2021/01/15 19:48:58 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	long	i;

	i = count * size;
	if (!(p = malloc(i)))
		return (NULL);
	while (i--)
		p[i] = 0;
	return (p);
}

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*s;

	len = 0;
	i = 0;
	while (s1[len])
		len++;
	if (!(s = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		k;
	char	*p;

	i = 0;
	j = 0;
	k = 0;
	if (!s1 || !s2)
		return (NULL);
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (!(p = malloc(sizeof(char) * (i + j + 1))))
		return (NULL);
	while (*s1)
		p[k++] = *s1++;
	while (*s2)
		p[k++] = *s2++;
	p[k] = '\0';
	return (p);
}
*/
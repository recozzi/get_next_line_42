/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: recozzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 13:47:06 by recozzi           #+#    #+#             */
/*   Updated: 2023/01/09 17:22:16 by recozzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *str1, char *str2)
{
	char	*new;
	size_t	i;
	size_t	j;

	new = (char *)malloc(sizeof(char) * \
			(ft_strlen(str1) + ft_strlen(str2) + 1));
	if (!new)
		return (0);
	i = 0;
	j = 0;
	while (str1 && str1[i])
	{
		new[i] = str1[i];
		i++;
	}
	while (str2 && str2[j])
	{
		new [i + j] = str2[j];
		j++;
	}
	new [i + j] = '\0';
	return (new);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	i;

	ptr = (void *)malloc(nmemb * size);
	if (!ptr)
		return (0);
	i = 0;
	while (i < size)
		ptr[i++] = 0;
	return ((void *)ptr);
}

int	ft_find_newline(char **str)
{
	size_t	i;

	i = 0;
	while (*str && (*str)[i])
	{
		if ((*str)[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

void	*ft_free(void **ptr)
{
	if (*ptr)
	{
		free(*ptr);
		*ptr = 0;
	}
	return (*ptr);
}

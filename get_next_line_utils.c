/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 14:18:24 by caburges          #+#    #+#             */
/*   Updated: 2024/12/04 11:31:24 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_join_buffers(char *vault, char *buffer)
{
	char	*joined_buffers;
	size_t	vault_len;

	if (!vault)
		return (NULL);
	vault_len = ft_strlen(vault);
	joined_buffers = malloc((vault_len + ft_strlen(buffer) + 1) * sizeof(char));
	if (!joined_buffers)
	{
		free(vault);
		return (NULL);
	}
	ft_strcpy(joined_buffers, vault);
	ft_strcpy(&joined_buffers[vault_len], buffer);
	free(vault);
	return (joined_buffers);
}

size_t	ft_strlen(char *str)
{
	size_t	len;

	len = 0;
	if (!str)
		return (0);
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*ft_strchr(char *s, int c)
{
	size_t	i;
	size_t	last_index;

	if (!s)
		return (NULL);
	last_index = ft_strlen(s);
	i = 0;
	while (i <= last_index)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_calloc(size_t nmemb, size_t size)
{
	char	*memory;
	size_t	total_memory;
	size_t	i;

	total_memory = nmemb * size;
	memory = malloc(nmemb * size);
	if (!memory)
		return (NULL);
	i = 0;
	while (i < total_memory)
	{
		memory[i] = '\0';
		i++;
	}
	return (memory);
}

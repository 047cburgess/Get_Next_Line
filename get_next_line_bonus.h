/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caburges <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 10:48:04 by caburges          #+#    #+#             */
/*   Updated: 2024/12/04 15:08:07 by caburges         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 150
# endif

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

char	*get_next_line(int fd);
int		ft_linelen(char *s);
char	*ft_extract_line(char *vault);
void	ft_set_next_start(char **vault);
char	*ft_fill_vault(int fd, char *vault);

// Utils
size_t	ft_strlen(char *str);
char	*ft_join_buffers(char *vault, char *buffer);
char	*ft_strchr(char *s, int c);
char	*ft_strcpy(char *dest, char *src);
char	*ft_calloc(size_t nmemb, size_t size);

#endif

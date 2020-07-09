/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkosi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/07 15:57:07 by vkosi             #+#    #+#             */
/*   Updated: 2019/07/07 16:05:15 by vkosi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		line_read(char **ptr, char **line, int fd, int rd_value)
{
	char	*tmp;
	int		index;

	index = 0;
	while (ptr[fd][index] != '\n' && ptr[fd][index] != '\0')
		index++;
	if (ptr[fd][index] == '\n')
	{
		*line = ft_strsub(ptr[fd], 0, index);
		tmp = ft_strdup(ptr[fd] + index + 1);
		free(ptr[fd]);
		ptr[fd] = tmp;
		if (ptr[fd][0] == '\0')
			ft_strdel(&ptr[fd]);
	}
	else if (ptr[fd][index] == '\0')
	{
		if (rd_value == BUFF_SIZE)
			return (get_next_line(fd, line));
		*line = ft_strdup(ptr[fd]);
		ft_strdel(&ptr[fd]);
	}
	return (1);
}

int		get_next_line(const int fd, char **line)
{
	int			rd_value;
	char		*ptr_copy;
	char		buffer[BUFF_SIZE + 1];
	static char	*ptr[255];

	if (fd < 0 || line == NULL)
		return (-1);
	while ((rd_value = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[rd_value] = '\0';
		if (ptr[fd] == NULL)
			ptr[fd] = ft_strnew(1);
		ptr_copy = ft_strjoin(ptr[fd], buffer);
		free(ptr[fd]);
		ptr[fd] = ptr_copy;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	if (rd_value < 0)
		return (-1);
	else if (rd_value == 0 && (ptr[fd] == NULL || ptr[fd][0] == '\0'))
		return (0);
	return (line_read(ptr, line, fd, rd_value));
}

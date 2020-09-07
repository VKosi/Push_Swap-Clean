/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/28 12:32:23 by vkosi             #+#    #+#             */
/*   Updated: 2020/05/30 14:29:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char *s)
{
	size_t	start;
	size_t	len;
	char	*tmp;

	start = 0;
	if (!s)
		return (NULL);
	while (((s[start] == ' ') || (s[start] == '\n') ||
				(s[start] == '\t')) && (s[start] != '\0'))
		start++;
	len = ft_strlen(s);
	while (((s[len - 1] == ' ') || (s[len - 1] == '\n') ||
				(s[len - 1] == '\t')) && (s[len - 1] != '\0'))
		len--;
	if (len < start)
		len = start;
	tmp = ft_strsub(s, start, len - start);
	if (tmp)
		return (tmp);
	return (NULL);
}

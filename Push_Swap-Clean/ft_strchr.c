/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkosi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 12:33:17 by vkosi             #+#    #+#             */
/*   Updated: 2019/07/07 16:23:11 by vkosi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*src = s;
	int			index;

	index = 0;
	while ((src[index] != (char)c) && (src[index] != '\0'))
		index++;
	if (src[index] == (char)c)
		return ((char*)src + index);
	else if ((char)c == '\0')
		return ((char*)src);
	return (NULL);
}

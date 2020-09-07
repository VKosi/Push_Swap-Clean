/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 12:41:33 by vkosi             #+#    #+#             */
/*   Updated: 2020/05/30 14:27:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char *s1, char *s2)
{
	char	*ptr;
	int		index;
	int		count;

	if (!s1 || !s2)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (ptr)
	{
		index = 0;
		while (s1[index] != '\0')
		{
			ptr[index] = s1[index];
			index++;
		}
		count = 0;
		while (s2[count] != '\0')
		{
			ptr[index + count] = s2[count];
			count++;
		}
		ptr[index + count] = '\0';
		return (ptr);
	}
	return (NULL);
}

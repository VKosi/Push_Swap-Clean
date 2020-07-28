/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkosi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 12:44:16 by vkosi             #+#    #+#             */
/*   Updated: 2019/06/24 14:53:34 by vkosi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*result;
	int 			i;

	if(s == NULL)
		return(NULL);
	i = 0;
	result = (char *)malloc((len+1)*sizeof(char));
	if(!result)
		return(NULL);
	result[len] = '\0';
	while(s[start] != '\0' && len--)
	{
		result[i++] = s[start++];
	}
	return (result);
}

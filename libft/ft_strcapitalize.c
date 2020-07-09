/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkosi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 13:17:27 by vkosi             #+#    #+#             */
/*   Updated: 2019/06/03 17:34:36 by vkosi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strcapitalize(char *s)
{
	int i;

	i = 0;
	s[i] = ft_toupper(s[i]);
	while (s[++i])
	{
		s[i] = ft_tolower(s[i]);
		if (!ft_isalnum(s[i - 1]))
			s[i] = ft_toupper(s[i]);
	}
	return (s);
}

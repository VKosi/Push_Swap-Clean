/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkosi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 11:43:10 by vkosi             #+#    #+#             */
/*   Updated: 2019/06/20 13:57:11 by vkosi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memset(void *ptr, int x, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		*(unsigned char*)(ptr + i) = (unsigned char)x;
		i++;
	}
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkosi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:59:00 by vkosi             #+#    #+#             */
/*   Updated: 2019/06/10 13:59:07 by vkosi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*mem;

	if (!(mem = (char*)malloc(sizeof(char)*size)))
		return (NULL);
	ft_bzero(mem, size);
	//free(mem);
	return (mem);
}

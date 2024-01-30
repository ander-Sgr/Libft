/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestrell <aestrell@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:27:43 by aestrell          #+#    #+#             */
/*   Updated: 2024/01/18 20:27:43 by aestrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	size_dst;
	size_t	size_src;
	size_t	total_size;
	size_t	i;

	i = 0;
	size_dst = ft_strlen(dst);
	size_src = ft_strlen(src);
	total_size = size_dst + size_src;
	if (total_size > size)
	{
		return (total_size);
	}
	while (i < size && src[i] != '\0')
	{
		dst[size_dst] = src[i];
		i++;
		size_dst++;
	}
	dst[size_dst] = '\0';
	return (size_dst);
}

/**
 * concatena hasta el max dst es decir
 * dst[5] = "hh"
 * src[7] = "hola mundo"
 * resultado sera -> hhol\0
*/
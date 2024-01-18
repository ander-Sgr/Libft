/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestrell <aestrell@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:20:52 by aestrell          #+#    #+#             */
/*   Updated: 2024/01/15 17:20:52 by aestrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*buffer;
	char		*temp_ptr_dest;
	const char	*temp_ptr_src;

    temp_ptr_dest = dest;
    temp_ptr_src = src;
	if (temp_ptr_dest < temp_ptr_src || temp_ptr_dest >= (temp_ptr_src + n))
	{
		
	}
}

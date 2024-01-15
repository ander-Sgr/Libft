/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestrell <aestrell@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 13:10:39 by aestrell          #+#    #+#             */
/*   Updated: 2024/01/13 13:10:39 by aestrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * rellna ceros en el puntero desde n 
 * se ha de usar '\0'
*/
void	ft_bzero(void *s, size_t n)
{
	char	*temp_ptr;
	size_t	i;

	i = 0;
	temp_ptr = s;
	while (i < n)
	{
		temp_ptr[i] = '\0';
		i++;
	}
}

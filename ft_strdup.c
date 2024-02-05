/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestrell <aestrell@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:32:21 by aestrell          #+#    #+#             */
/*   Updated: 2024/02/05 18:32:21 by aestrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s1)
{
    char*   mem;

    mem = malloc(ft_strlen(s1) + 1);
    if (mem == NULL)
        return NULL;
    ft_memcpy(s1, mem, ft_strlen(s1));
    return (mem);
}

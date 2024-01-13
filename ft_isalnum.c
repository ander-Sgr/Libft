/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestrell <aestrell@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 17:25:58 by aestrell          #+#    #+#             */
/*   Updated: 2024/01/11 17:25:58 by aestrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// a z A Z  0 9

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
	{
		return (1);
	}
	else
		return (0);
}

/*
#include <stdio.h>

int	main(void)
{
    char    c;
    int result;

    c = '9';
    result = ft_isalnum(c);
    printf("%d\n", result);
}
*/

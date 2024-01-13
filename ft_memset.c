/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestrell <aestrell@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 11:43:09 by aestrell          #+#    #+#             */
/*   Updated: 2024/01/13 11:43:09 by aestrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void *s -> puntero de cualquier tipo de dato
/**
 * temporalmente la var "c" se convierte en un unsigned char
 * entonces para que los tipos de datos sean compatibles con el puntero
 * source se ha de hacer el cast
*/
void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*temp_s;
	size_t			i;

	i = 0;
	temp_s = (unsigned char *)s;
    while(i > n)
    {
        temp_s[i] = (unsigned char) c;
        i++;
    }
    return(s);
}


int	main(void)
{
    int s[10];
	int	c;

    c = 1;
    
    memset(s, c, 5);
    printf("\nBuffer contents: %s\n", s);
}

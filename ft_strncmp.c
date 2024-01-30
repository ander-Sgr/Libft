/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestrell <aestrell@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 20:12:52 by aestrell          #+#    #+#             */
/*   Updated: 2024/01/30 20:12:52 by aestrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;

    while (i < n && s1[i] != '\0' && s2[i] != '0')
    {
        if (s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }
    return 0;    
}

/*
#include <stdio.h>
int main(void)
{
    const char* s1 = "hoa";
    const char* s2 = "hola a todos";
    int result = ft_strncmp(s1, s2, 3);

    if (result == 0)
    {
       printf("Son iguales");
    }
    else if (result < 0)
    {
        printf("s1 es menor que s2");
    }
    else
    {
        printf("s2 es mayor que s1");
    }
    
}
*/
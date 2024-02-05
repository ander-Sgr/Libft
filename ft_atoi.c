/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestrell <aestrell@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 15:39:59 by aestrell          #+#    #+#             */
/*   Updated: 2024/02/04 15:39:59 by aestrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
    int sign;
    int result;

	i = 0;
    sign = 1;
    result = 0;
	while (nptr[i] != '\0' && (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13)))
		i++;
    if (nptr[i] == '+')
        i++;
    else if (nptr[i] == '-')
    {
        sign = -1;
        i++;
    }
    while (nptr[i] != '\0' && (nptr[i] >= '0' && nptr[i] <= '9'))
    {
        result = result * 10 + (nptr[i] - '0');
        i++;
    }
    return (result * sign);
}
#include <stdio.h>
#include <stdlib.h>
int main() {
    const char *cadena = "-1234a5";
    int result1 = atoi(cadena);
    int result2 = ft_atoi(cadena);
    printf("result1: %d\n", result1);  // Salida: 12345
    printf("result2: %d\n", result2); 
    return 0;
}
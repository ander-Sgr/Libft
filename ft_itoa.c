/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestrell <aestrell@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 21:27:22 by aestrell          #+#    #+#             */
/*   Updated: 2024/02/13 21:27:22 by aestrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_count_digits(long n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		total_digits;
	char	*arr_int;
	int		i;
	long	nbr;

	nbr = n;
	total_digits = ft_count_digits(nbr);
	arr_int = ft_calloc(total_digits + 1, sizeof(char));
	i = total_digits - 1;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		arr_int[0] = '-';
	}
	if (nbr == 0)
		arr_int[0] = '0';
	while (nbr != 0)
	{
		arr_int[i] = 48 + (nbr % 10);
		nbr = nbr / 10;
		i--;
	}
	arr_int[total_digits] = '\0';
	return (arr_int);
}

/*
int	main(void)
{
	int		num;
	int		total_len;
	char	*arr_int;

	num = -1245;
	total_len = ft_count_digits(num);
	arr_int = ft_itoa(num);
	printf("total nums: %d\n", total_len);
	printf("El entero %d convertido a cadena es: %s\n", num, arr_int);
	free(arr_int);
}
*/

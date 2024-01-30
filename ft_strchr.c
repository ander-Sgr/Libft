/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestrell <aestrell@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:29:12 by aestrell          #+#    #+#             */
/*   Updated: 2024/01/25 19:29:12 by aestrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// busqueda secuencial
char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (char *)&s[i];
		}
		i++;
	}
	return NULL;
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	const char *str = "Hola, mundo!";
	char buscar = 'a';

	if (strchr(str, buscar))
	{
       // char *resultado = strchr(str, buscar);
		printf("el caracter %s esta ", &buscar);
	}
	else
	{
		printf("El caracter no esta presente en la cadena.\n");
	}
}
*/
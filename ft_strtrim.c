/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestrell <aestrell@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 00:18:43 by aestrell          #+#    #+#             */
/*   Updated: 2024/02/07 00:18:43 by aestrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	is_sequence(char const *str, char const *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (to_find[j] != '\0' && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (1);
		i++;
	}
	return (-1);
}

static int	first_position(char const *str, char const *set)
{
	if (is_sequence(str, set) != -1)
	{
		return ((int)ft_strlen(set));
	}
	return (-1);
}

static int	last_position(char const *str, char const *set)
{
	int	i;
	int	set_length;

	i = (int)ft_strlen(str) - 1;
	while (i >= 0)
	{

	}

}

static int	get_trim_len(char const *str, char const *set)
{
    printf("last post result: %d: ", last_position(str, set));
	return (last_position(str, set) - first_position(str, set));
}

int	main(void)
{
	const char	*cadena;
	const char	*secuencia;
	int			posicion;

	cadena = "    Hello, world!    ";
	secuencia = "   ";
	posicion = get_trim_len(cadena, secuencia);
	printf("pos: %d: ", posicion);
}

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

char		*ft_strdup(const char *str)
{
	int		i;
	int		len;
	char	*new_str;

	len = 0;
	while (str[len])
		len++;
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!(new_str))
		return (NULL);
	i = 0;
	while (str[i])
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void) {
    const char *original = "Hola, mundo";

    // Duplicar la cadena
    char *copia = ft_strdup(original);

    if (copia == NULL) {
        fprintf(stderr, "Error al duplicar la cadena.\n");
        return (1);
    }

    // Imprimir la cadena original y la copia
    printf("Original: %s\n", original);
    printf("Copia:    %s\n", copia);

    // Liberar la memoria asignada por strdup
    free(copia);

    return (0);
}
*/

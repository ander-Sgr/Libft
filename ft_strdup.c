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

char	*ft_strdup(const char *s1)
{
	char	*dest;

	dest = malloc(ft_strlen(s1) + 1);
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, s1, ft_strlen(s1));
	return (dest);
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

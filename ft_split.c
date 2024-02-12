/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aestrell <aestrell@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 02:50:41 by aestrell          #+#    #+#             */
/*   Updated: 2024/02/11 02:50:41 by aestrell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char separator)
{
	int	i;
	int	is_in_word;
	int	words_count;

	i = 0;
	is_in_word = 0;
	words_count = 0;
	while (s[i] != '\0')
	{
		if (s[i] == separator && is_in_word)
		{
			words_count++;
			is_in_word = 0;
		}
		else if (s[i] != separator && !is_in_word)
			is_in_word = 1;
		i++;
	}
	if (is_in_word)
		words_count++;
	return (words_count);
}

static char	**ft_allocate_memory(int words_count)
{
	char	**matrix;

	if (words_count == 0)
	{
		matrix = (char **)malloc(sizeof(char *));
		if (matrix != NULL)
			matrix[0] = NULL;
		return (matrix);
	}
	matrix = (char **)malloc((words_count + 1) * sizeof(char *));
	return (matrix);
}

char	*fill_word(const char *s, int start, int end)
{
	char	*str;
	int		i;
	int		len_str;

	len_str = end - start;
	str = (char *)malloc((len_str + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	strlcpy(str, s + start, len_str + 1);
	str[len_str] = '\0';
	return (str);
}


char	**ft_split(char const *s, char c)
{
}


#include <stdio.h>

int	main(void)
{
	char const	*s;
	char		c;
	int			total_words;

	s = "   ,,,,hola, que,tal, a,todos,,,,";
	c = ',';
	total_words = ft_count_words(s, c);
	printf("Total words: %d", total_words); // should be 5
}

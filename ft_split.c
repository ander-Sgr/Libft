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
		matrix[0] = '\0';
		return (matrix);
	}
	matrix = (char **)malloc((words_count + 1) * sizeof(char *));
	return (matrix);
}

char	*ft_fill_word(const char *s, int start, int end)
{
	char	*str;
	int		len_str;
	int		i;

	len_str = (end - start) + 1;
	str = (char *)malloc((len_str + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len_str)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[len_str] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**result_split;
	int		i;
	int		start;
	int		word_count;

	result_split = ft_allocate_memory(ft_count_words(s, c));
	i = 0;
	word_count = 0;
	start = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			if (start != i)
				result_split[word_count++] = ft_fill_word(s, start, i - 1);
			start = i + 1;
		}
		i++;
	}
	if (start != i)
		result_split[word_count++] = ft_fill_word(s, start, i - 1);
	result_split[word_count] = NULL;
	return (result_split);
}

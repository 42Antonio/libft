/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaros- <aclaros-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 17:22:42 by aclaros-          #+#    #+#             */
/*   Updated: 2022/10/27 10:36:42 by aclaros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_words(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			words++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (words);
}

static size_t	ft_word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static char	**ft_free(char **str, size_t i)
{
	while (i--)
		free(str[i]);
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	str = (char **)malloc(sizeof(char *) * (ft_words(s, c) + 1));
	if (!s || !str)
		return (NULL);
	while (i < ft_words(s, c))
	{
		while (s[j] == c)
			j++;
		str[i] = (char *)malloc(sizeof(char) * (ft_word_len(&s[j], c) + 1));
		if (!str[i])
			return (ft_free(str, i));
		k = 0;
		while (s[j] != c && s[j] != '\0')
			str[i][k++] = s[j++];
		str[i++][k] = '\0';
	}
	str[i] = NULL;
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaros- <aclaros-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:29:56 by aclaros-          #+#    #+#             */
/*   Updated: 2022/10/21 13:03:03 by aclaros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

static size_t	ft_part_len(char const *s_parts, char c)
{
	size_t	i;

	i = 0;
	while (s_parts[i] != c && s_parts[i] != '\0')
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

static	char	**initializer(char const *s, char c)
{
	int	i;
	int words;
	int	*len_words;
	char	*s_init;
	char	**s_init2; 
	i = 0;
	words = 0;
	s_init = ft_strtrim(s,&c);
	if (!s_init)
		return (NULL);
	len_words[ft_strlen(s_init)];
	while (*s_init != c)
	{
		i = ft_part_len(*s_init, c);
		len_words[words++] = i;
		*s_init + i;
	}
	s_init2 = (char **)malloc(sizeof(char *) * (words + 1));
	while (j < words)
	{
		s_init2[j] = (char *)malloc(sizeof(char) * (len_words[j] + 1));
		j++;
	}
	return (s_init_2);
}
char	**ft_split(char const *s, char c)
{
	char	**sol;
	size_t	col;
	size_t	f;

	f = -1;
	if (!s)
		return (NULL);
	sol = initializer(s, c);
	if (!sol)
		return (NULL);
	while (*s)
	{
		f++;
		col = 0;
		while (*s == c)
			s++;
		if (*s != c )
		{
			while(*s != c)
				sol[f][col++] = *s++;
		}	
		str[f][col] = '\0';
	}
	str[f] = NULL;
	return (sol);
}

int main(){
    char **tabstr;
    int i = 0; 
    if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ')))
        printf("NULL");
    else
    {
        while (tabstr[i] != NULL)
        {
            printf("LA i ES:%i", i);
            printf("\n%s",tabstr[i]);
            i++;
        }
    }
    }

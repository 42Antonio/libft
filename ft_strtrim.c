/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaros- <aclaros-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:29:56 by aclaros-          #+#    #+#             */
/*   Updated: 2022/09/30 12:42:41 by aclaros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cuthere(char const	*s1, char const	*set)
{
	size_t	q_setlen;
	int		n;

	q_setlen = 0;
	n = 0;
	while (set[q_setlen] == s1[q_setlen + n * ft_strlen(set)])
	{
		q_setlen++;
		if (q_setlen == ft_strlen(set))
		{
			q_setlen = 0;
			n ++;
		}
	}
	return (n * ft_strlen(set));
}

static char	*ft_strswap(char *str, size_t i, size_t j)
{
	char	transition;

	if (str[i] && str[j] && i != j)
	{
		transition = str[i];
		str[i] = str[j];
		str[j] = transition;
	}
	return (str);
}

static char	*ft_strbackwards(char	*str)
{
	int	n;
	int	i;

	i = 0;
	if (ft_strlen(str) >= 2)
	{
		n = ft_strlen(str) / 2;
		while (n >= 1)
		{
			ft_strswap(str, i, ft_strlen(str) - 1 - i);
			i++;
			n--;
		}
	}
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*s;
	int		j;
	char	*transition1_s;
	char	*transition2_s;
	char	*final_s;

	i = ft_cuthere(s1, set);
	s = ft_substr(s1, i, ft_strlen(s1) - i);
	transition1_s = ft_strbackwards(s);
	j = ft_cuthere(transition1_s, set);
	transition2_s = ft_substr(transition1_s, j, ft_strlen(s1) - j);
	if (j != 0)
		final_s = ft_substr(transition2_s, ft_strlen(transition1_s) - j - 1, j);
	else
		final_s = ft_strdup(transition2_s);
	return (ft_strbackwards(final_s));
}

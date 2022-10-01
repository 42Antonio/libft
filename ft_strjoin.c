/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaros- <aclaros-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:02:46 by aclaros-          #+#    #+#             */
/*   Updated: 2022/09/30 12:05:32 by aclaros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cat;
	int		i;

	i = 0;
	if (!(cat = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (0);
	while (*s1)
		cat[i++] = *s1++;
	while (*s2)
		cat[i++] = *s2++;
	cat[i] = '\0';
	return (cat);
}

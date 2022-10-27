/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaros- <aclaros-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:25:25 by aclaros-          #+#    #+#             */
/*   Updated: 2022/10/27 10:51:14 by aclaros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	real_l;

	i = 0;
	if (!ft_strlen(s) || start > ft_strlen(s) || len == 0)
		return (ft_strdup(""));
	if (len + start > ft_strlen(s) - 1)
		real_l = ft_strlen(s) - start;
	else
		real_l = len;
	substr = (char *)malloc(sizeof(char) * (real_l + 1));
	if (!(substr))
		return (0);
	while (real_l && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
		real_l--;
	}
	substr[i] = '\0';
	return (substr);
}

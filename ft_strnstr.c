/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonio <antonio@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:46:15 by aclaros-          #+#    #+#             */
/*   Updated: 2022/10/26 12:38:25 by antonio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strnstr(const char *haystack, const char	*needle, size_t len)
{
	size_t	needle_len;
	size_t	i;
	size_t	j;

	j = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	while (haystack[j] && j < len)
	{
		i = 0;
		if (haystack[j + i] == needle[i])
		{
			while (haystack[j + i] == needle[i] && j + i < len
				&& haystack[j + i])
				i++;
			if (i == needle_len)
				return ((char *)&haystack[j]);
		}
		j++;
	}
	return (NULL);
}

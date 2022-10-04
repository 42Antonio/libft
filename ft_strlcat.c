/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaros- <aclaros-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:16:17 by aclaros-          #+#    #+#             */
/*   Updated: 2022/10/04 15:28:41 by aclaros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t j; 

	i = 0;
	j = 0; 
	while(dst[j] && j < dstsize)
		j++; 
	while (i < dstsize - j - 1 && src[i])
	{	
		dst[i + j] = src[i];
		i++;			
	}
	if(j != dstsize)
		dst[i+j] = '\0';
	return (j + ft_strlen(src));
}

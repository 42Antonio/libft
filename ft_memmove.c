/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaros- <aclaros-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:51:42 by aclaros-          #+#    #+#             */
/*   Updated: 2022/10/01 12:53:33 by aclaros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (src + n > dst)
		ft_memcpy(dst, src, n);
	else
	{
		while (n--)
			((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
	}
	return (dst);
}
/*	char	*dst2;
	char	*src2;

	dst2 = (char *)dst;
	src2 = (char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst2 < src2)
	{
		while (len--)
			*dst2++ = *src2++;
	}
	else
	{
		dst2 += len;
		src2 += len;
		while (len--)
			*--dst2 = *--src2;
	}
	return (dst);
}*/

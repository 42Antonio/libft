/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaros- <aclaros-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 11:30:48 by aclaros-          #+#    #+#             */
/*   Updated: 2022/10/11 12:53:05 by aclaros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	r_len;

	r_len = 0;
	while (*s)
	{
		s++;
		r_len++;
	}
	while (*s != (char)c && r_len)
	{
		r_len--;
		s--;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}

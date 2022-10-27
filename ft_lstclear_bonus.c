/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclaros- <aclaros-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 11:59:32 by aclaros-          #+#    #+#             */
/*   Updated: 2022/10/21 12:01:17 by aclaros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*onelst;

	if (!*lst || !del)
		return ;
	while (*lst)
	{
		onelst = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = onelst;
	}
	*lst = NULL;
}

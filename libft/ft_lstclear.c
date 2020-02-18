/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraujo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 15:03:02 by maraujo-          #+#    #+#             */
/*   Updated: 2020/02/18 15:24:15 by maraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*prev;

	if (!del)
		return ;
	while (*lst)
	{
		del((*lst)->content);
		prev = *lst;
		*lst = prev->next;
		free(prev);
	}
	*lst = NULL;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraujo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 14:47:43 by maraujo-          #+#    #+#             */
/*   Updated: 2020/02/17 17:53:45 by maraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	*ft_alloc_zeros(size_t size)
{
	void	*mem;

	if (!(mem = malloc(size)))
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}

t_list			*ft_lstnew(void *content)
{
	t_list	*lst;

	if (!(lst = (t_list*)ft_alloc_zeros(sizeof(t_list))))
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}

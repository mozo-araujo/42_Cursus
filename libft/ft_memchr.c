/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraujo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:11:10 by maraujo-          #+#    #+#             */
/*   Updated: 2020/02/05 20:59:35 by maraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *dst, int c, size_t n)
{
	unsigned char	*d;

	d = (unsigned char*)dst;
	while (n--)
	{
		if (*d++ == (unsigned char)c)
			return ((void *)--d);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraujo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:18:21 by maraujo-          #+#    #+#             */
/*   Updated: 2020/02/17 15:53:44 by maraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	d = (unsigned char*)dst;
	s = (const unsigned char*)src;
	if (dst == src)
		return (dst);
	i = 0;
	if (d > s)
		while (++i <= len)
			d[len - i] = s[len - i];
	else
		while (len--)
			*d++ = *s++;
	return (dst);
}

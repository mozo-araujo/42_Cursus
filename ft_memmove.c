/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraujo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:18:21 by maraujo-          #+#    #+#             */
/*   Updated: 2020/02/13 20:56:28 by maraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
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
		while (n--)
			*d++ = *s++;
	return (dst);
}

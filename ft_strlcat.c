/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraujo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 13:25:10 by maraujo-          #+#    #+#             */
/*   Updated: 2020/02/06 10:10:23 by maraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strnlen(char *str, size_t max)
{
	size_t	len;

	len = 0;
	while (len < max)
	{
		if (!str[len])
			break ;
		len++;
	}
	return (len);
}

size_t			ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strnlen(dst, size);
	if (dstlen == size)
		return (srclen + size);
	if (srclen < (size - dstlen))
		ft_memcpy(dst + dstlen, src, (srclen + 1));
	else
	{
		ft_memcpy(dst + dstlen, src, (size - 1));
		dst[size - 1] = '\0';
	}
	return (dstlen + srclen);
}

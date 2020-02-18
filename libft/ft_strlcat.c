/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraujo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 13:25:10 by maraujo-          #+#    #+#             */
/*   Updated: 2020/02/17 15:46:30 by maraujo-         ###   ########.fr       */
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

size_t			ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_strnlen(dst, dstsize);
	if (dstlen == dstsize)
		return (srclen + dstsize);
	if (srclen < (dstsize - dstlen))
		ft_memcpy(dst + dstlen, src, (srclen + 1));
	else
	{
		ft_memcpy(dst + dstlen, src, (dstsize - 1));
		dst[dstsize - 1] = '\0';
	}
	return (dstlen + srclen);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 17:20:10 by maraujo-          #+#    #+#             */
/*   Updated: 2020/06/19 10:39:28 by maraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int				ft_strlen(const char *s)
{
	unsigned long i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t			ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t len;

	if (!src)
		return (0);
	len = 0;
	while (len + 1 < dstsize && *(src + len))
	{
		*(dst + len) = *(src + len);
		len++;
	}
	if (dstsize != 0)
		*(dst + len) = '\0';
	while (*(src + len))
		len++;
	return (len);
}

char			*ft_strdup(const char *s1)
{
	char	*s1_cpy;
	size_t	len;
	size_t	i;

	len = ft_strlen((char *)s1);
	i = 0;
	if (!(s1_cpy = (char *)malloc((len + 1) * sizeof(char))))
		return (NULL);
	while (i < len)
	{
		*(s1_cpy + i) = *(s1 + i);
		i++;
	}
	*(s1_cpy + i) = '\0';
	return (s1_cpy);
}

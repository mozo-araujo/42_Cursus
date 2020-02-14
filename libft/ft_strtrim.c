/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraujo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 17:46:41 by maraujo-          #+#    #+#             */
/*   Updated: 2020/02/13 20:25:20 by maraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_is_set(char c, char const *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

static	size_t	ft_get_size(char const *s1, char const *set)
{
	size_t size;

	size = 0;
	while (*s1)
		if (!ft_is_set(*s1++, set))
			size++;
	return (size);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	if (!(ft_get_size(s1, set)))
	{
		if (!(p = malloc(1)))
			return (NULL);
		p[0] = '\0';
		return (p);
	}
	if (!(p = malloc(ft_get_size(s1, set) + 1)))
		return (NULL);
	i = 0;
	while (*s1)
	{
		if (!(ft_is_set(*s1, set)))
			p[i++] = *s1;
		s1++;
	}
	p[i] = '\0';
	return (p);
}

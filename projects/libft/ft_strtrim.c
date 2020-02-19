/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraujo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 17:46:41 by maraujo-          #+#    #+#             */
/*   Updated: 2020/02/19 17:44:37 by maraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	size_t	ft_is_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static	char	*ft_null(char *p)
{
	if (!(p = malloc(sizeof(char) * 1)))
		return (NULL);
	p[0] = '\0';
	return (p);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	i;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_is_set(s1[i], set))
		i++;
	start = i;
	p = NULL;
	if (start == ft_strlen(s1))
		return (ft_null(p));
	if ((i = ft_strlen(s1) - 1))
		while (i > 0 && ft_is_set(s1[i], set))
			i--;
	end = i;
	if (!(p = malloc(sizeof(char) * (end - start + 2))))
		return (NULL);
	i = 0;
	while (start <= end)
		p[i++] = s1[start++];
	p[i] = '\0';
	return (p);
}

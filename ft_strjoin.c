/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraujo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:30:25 by maraujo-          #+#    #+#             */
/*   Updated: 2020/02/13 19:55:15 by maraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *p;

	if (!s1 || !s2)
		return (NULL);
	if (!(p = malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	ft_memcpy(p, s1, ft_strlen(s1));
	ft_memcpy(&p[ft_strlen(s1)], s2, ft_strlen(s2));
	p[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (p);
}

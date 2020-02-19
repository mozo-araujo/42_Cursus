/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraujo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:30:25 by maraujo-          #+#    #+#             */
/*   Updated: 2020/02/19 18:34:44 by maraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	len_s1;
	size_t	len_s2;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	p = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (p == NULL)
		return (NULL);
	while (*s1)
		*(p++) = *(s1++);
	while (*s2)
		*(p++) = *(s2++);
	*p = '\0';
	return (p - (len_s1 + len_s2));
}

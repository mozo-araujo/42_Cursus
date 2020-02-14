/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraujo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 11:00:16 by maraujo-          #+#    #+#             */
/*   Updated: 2020/01/31 12:08:03 by maraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!(*to_find))
		return ((char *)str);
	while (str[i] && i < len)
	{
		j = 0;
		if (str[i] == to_find[j++])
		{
			while (to_find[j] && str[i + j] == to_find[j] && (i + j) < len)
				j++;
			if (!(to_find[j]))
				return ((char*)&str[i]);
		}
		i++;
	}
	return (0);
}

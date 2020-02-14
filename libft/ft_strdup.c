/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraujo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 11:52:52 by maraujo-          #+#    #+#             */
/*   Updated: 2020/02/05 20:56:14 by maraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*p;
	size_t	len;

	len = ft_strlen(str) + 1;
	if (!(p = malloc(sizeof(char) * len)))
		return (NULL);
	ft_memcpy(p, str, len);
	return (p);
}

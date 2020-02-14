/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraujo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:27:07 by maraujo-          #+#    #+#             */
/*   Updated: 2020/02/05 21:27:49 by maraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t len;

	len = ft_strlen(str);
	len++;
	while (len--)
	{
		if (*str == (char)c)
			return ((char*)str);
		str++;
	}
	return (NULL);
}

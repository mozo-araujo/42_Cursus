/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraujo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:13:29 by maraujo-          #+#    #+#             */
/*   Updated: 2020/02/13 20:52:51 by maraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char*)s1;
	s = (unsigned char*)s2;
	if (n == 0)
		return (0);
	while (n-- && *d == *s)
	{
		d++;
		s++;
	}
	return ((int)(*d - *s));
}

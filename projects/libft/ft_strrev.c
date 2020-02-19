/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraujo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 11:09:29 by maraujo-          #+#    #+#             */
/*   Updated: 2020/01/31 11:10:58 by maraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	c;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(str);
	while (i < len - 1)
	{
		c = str[i];
		str[i] = str[len - 1];
		str[len - 1] = c;
		len--;
		i++;
	}
	return (str);
}

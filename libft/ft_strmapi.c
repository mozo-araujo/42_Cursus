/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraujo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 10:31:16 by maraujo-          #+#    #+#             */
/*   Updated: 2020/01/30 11:45:26 by maraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*p;

	i = -1;
	if (!*s || f == NULL)
		return (NULL);
	if (!(p = malloc(ft_strlen(s) + 1)))
		return (NULL);
	while (s[++i])
		p[i] = (*f)(i, s[i]);
	p[i] = '\0';
	return (p);
}

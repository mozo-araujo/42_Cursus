/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraujo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:08:07 by maraujo-          #+#    #+#             */
/*   Updated: 2020/02/19 17:32:11 by maraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	unsigned	ft_count_digits(unsigned int n)
{
	unsigned int size;

	size = 1;
	while (n >= 10)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char				*ft_itoa(int n)
{
	unsigned int	i;
	unsigned int	size;
	unsigned int	num;
	char			*p;

	if (n < 0)
		num = (unsigned int)(n * -1);
	else
		num = (unsigned int)n;
	size = ft_count_digits(num);
	i = 0;
	if (!(p = (char*)malloc(sizeof(char) * (size + 1 + (n < 0 ? 1 : 0)))))
		return (NULL);
	if (n < 0 && (p[i] = '-'))
		size++;
	i = size - 1;
	while (num >= 10)
	{
		p[i--] = (char)(num % 10 + 48);
		num /= 10;
	}
	p[i] = (char)(num % 10 + 48);
	p[size] = '\0';
	return (p);
}

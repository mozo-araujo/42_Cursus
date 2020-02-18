/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraujo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:08:07 by maraujo-          #+#    #+#             */
/*   Updated: 2020/02/18 16:06:10 by maraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	unsigned	ft_count_digits(unsigned int n)
{
	unsigned int size;

	size = 1;
	while (n >= 10)
	{
		size++;
		n = n / 10;
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
	size = n < 0 ? ft_count_digits(num) + 1 : ft_count_digits(num);
	i = 0;
	if (!(p = (char*)malloc(size + 1)))
		return (NULL);
	p[i] = n < 0 ? '-' : 0;
	i = size - 1;
	while (num >= 10)
	{
		p[i--] = (char)(num % 10 + '0');
		num = num / 10;
	}
	p[i] = (char)(num % 10 + '0');
	p[size] = '\0';
	return (p);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraujo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:08:07 by maraujo-          #+#    #+#             */
/*   Updated: 2020/02/17 16:50:13 by maraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int				ft_count_digits(int num)
{
	int n;
	int size;

	n = num;
	size = 0;
	if (n <= 0)
		size++;
	while (n)
	{
		size++;
		n = n / 10;
	}
	return (size);
}

static	unsigned	int	ft_neg(int num, unsigned int *n)
{
	if (num < 0)
		*n = -num;
	else
		*n = num;
	return (*n);
}

char					*ft_itoa(int num)
{
	int				i;
	int				rem;
	int				size;
	unsigned int	n;
	char			*p;

	i = 0;
	size = ft_count_digits(num);
	if (!(p = malloc(size + 1)))
		return (NULL);
	if (num == 0)
		p[i++] = '0';
	n = ft_neg(num, &n);
	while (n)
	{
		rem = n % 10;
		p[i++] = rem + '0';
		n = n / 10;
	}
	if (num < 0)
		p[i++] = '-';
	p[i] = '\0';
	ft_strrev(p);
	return (p);
}

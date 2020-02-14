/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraujo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:25:35 by maraujo-          #+#    #+#             */
/*   Updated: 2020/01/31 10:25:40 by maraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_neg(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2", 2);
		n = 147483648;
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	return (n);
}

static int	how_many_digits(int result)
{
	int n_dig;

	n_dig = 1;
	while (result >= 10)
	{
		n_dig = n_dig * 10;
		result = result / 10;
	}
	return (n_dig);
}

void		ft_putnr(int n)
{
	int n_dig;
	int dig;
	int result;

	n = check_neg(n);
	if (n < 10)
	{
		n = n + '0';
		write(1, &n, 1);
	}
	else
	{
		result = n;
		n_dig = how_many_digits(result);
		while (n_dig > 0)
		{
			dig = (n / n_dig) + '0';
			write(1, &dig, 1);
			n = n % n_dig;
			n_dig = n_dig / 10;
		}
	}
}

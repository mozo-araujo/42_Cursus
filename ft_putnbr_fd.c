/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraujo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 10:25:49 by maraujo-          #+#    #+#             */
/*   Updated: 2020/02/05 20:57:27 by maraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_neg(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2", 2);
		n = 147483648;
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
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

void		ft_putnbr_fd(int n, int fd)
{
	int n_dig;
	int dig;
	int result;

	n = check_neg(n, fd);
	if (n < 10)
	{
		n = n + '0';
		write(fd, &n, 1);
	}
	else
	{
		result = n;
		n_dig = how_many_digits(result);
		while (n_dig > 0)
		{
			dig = (n / n_dig) + '0';
			write(fd, &dig, 1);
			n = n % n_dig;
			n_dig = n_dig / 10;
		}
	}
}

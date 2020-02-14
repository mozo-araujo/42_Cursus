/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraujo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/01 17:34:44 by maraujo-          #+#    #+#             */
/*   Updated: 2020/02/05 19:18:39 by maraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *str)
{
	long int				sign;
	unsigned long long int	result;

	sign = 1;
	result = 0;
	if (!*str)
		return (0);
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str) == 1)
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	if (result >= LONG_MAX && sign == 1)
		return (-1);
	else if (result >= LONG_MAX && sign == -1)
		return (0);
	return ((int)result * sign);
}

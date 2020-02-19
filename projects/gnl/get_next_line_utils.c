/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraujo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 17:20:10 by maraujo-          #+#    #+#             */
/*   Updated: 2020/02/19 18:38:08 by maraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	void	**ft_malloc_line(char *temp, char **line)
{
	size_t	n_lines;
	void	*mem;

	n_lines = 0;
	while (*temp)
		if (*temp == '\n')
			n_lines++;
	if (!(mem = malloc(sizeof(char*) * (n_lines + 1))))
		return (NULL);
	return (mem);
}

static	int		ft_get_status(char *temp, char **line)
{
	int	status;
	int	i;

	status = 1;
	i = 0;
	while (*temp != '\n')
	{
		line[i]
	}
}

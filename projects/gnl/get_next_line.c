/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraujo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 17:19:51 by maraujo-          #+#    #+#             */
/*   Updated: 2020/02/19 18:28:16 by maraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Entradas:
 * 1. Arquivo
 * 2. Standard Input (stdin)
 *    - O stdin é chamado quando colocamos 0 ao invés de 1 nas funções da
 *      biblioteca unistd.h, ou seja, no write, read e open
 *
 * Começando tudo:
 * 1. Main que abra um arquivo x com a função open, 
 *    seja como argumento ou stdin, e retorne um fd como int
 * 2. Função principal 'get_next_line' que leia o fd com o read, 
 *    e armazene em um ponteiro. Esse ponteiro será lido por outra função,
 *    que retornará 1 ou 0
 * 3. Função que leia o ponteiro e verifique por '\n' para retornar 1
 *    ou por '\0' para retornar 0. Ao mesmo tempo, também armazena no
 *    array 'line' o conteúdo da linha, excluindo '\n' e '\0'
 */

#include "get_next_line.h"

int	get_next_line(int fd, char **line)
{
	char	*temp;
	int		status;

	if (!fd || !line)
		return (-1);
	if (!(temp = malloc(sizeof(char) * BUFFER_SIZE)))
		return (-1);
	read(fd, temp, BUFFER_SIZE);
	line = ft_malloc_line(temp, line);
	status = ft_get_status(temp, line);
	return (status);
}


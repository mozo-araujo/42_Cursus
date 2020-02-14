/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maraujo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 10:56:11 by maraujo-          #+#    #+#             */
/*   Updated: 2020/02/13 20:24:18 by maraujo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_get_words(char const *s, char c)
{
	size_t words;

	words = 0;
	if (*s != c)
	{
		words++;
		s++;
	}
	while (*s)
	{
		if (*s == c && *(s + 1) != c && *(s + 1))
			words++;
		s++;
	}
	return (words);
}

static	size_t	ft_word_size(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static	char	*ft_next_word(char const *s, char c)
{
	while (*s && *s == c)
		s++;
	return ((char *)s);
}

static	void	ft_free_all(char **s_words, size_t i)
{
	while (i--)
		free(s_words[i]);
	free(s_words);
}

char			**ft_split(char const *s, char c)
{
	char		**s_words;
	size_t		words;
	size_t		i;

	i = 0;
	words = ft_get_words(s, c);
	if (!(s_words = malloc((words * sizeof(char*)) + 1)))
		return (NULL);
	while (i < words)
	{
		s = ft_next_word(s, c);
		if (!(s_words[i] = malloc((ft_word_size(s, c) * sizeof(char)))))
		{
			ft_free_all(s_words, i);
			return (NULL);
		}
		ft_strlcpy(s_words[i], s, (ft_word_size(s, c) + 1));
		i++;
		s += ft_word_size(s, c);
	}
	s_words[i] = 0;
	return (s_words);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfinger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 13:01:46 by lfinger           #+#    #+#             */
/*   Updated: 2019/06/18 10:38:18 by lfinger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		cpy(char *dest, char *src, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

static size_t	cut_words(const char *str, size_t words, char **r, char c)
{
	size_t		w;
	size_t		start;
	size_t		end;

	w = 0;
	start = 0;
	while (w < words && str[start] != '\0')
	{
		while (str[start] == c)
			start++;
		end = start;
		while (str[end] != '\0' && str[end] != c)
			end++;
		if ((r[w] = malloc(end - start + 1)) == '\0')
			return (0);
		cpy(r[w], (char *)str + start, end - start);
		start = end + 1;
		w++;
	}
	return (1);
}

static size_t	count_words(const char *str, char c)
{
	size_t		i;
	size_t		words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		while (str[i] == c)
			i++;
		if (str[i] == '\0')
			break ;
		while (str[i] != '\0' && str[i] != c)
			i++;
		words++;
	}
	return (words);
}

char			**ft_strsplit(char const *str, char c)
{
	size_t		words;
	char		**r;

	if (str == 0)
	{
		return (NULL);
	}
	words = count_words(str, c);
	if (words == 0)
	{
		if ((r = malloc(sizeof(*r))) == 0)
			return (NULL);
		r[0] = NULL;
		return (r);
	}
	if ((r = malloc((words + 1) * sizeof(*r))) == 0)
		return (NULL);
	if (cut_words(str, words, r, c) == 0)
		return (NULL);
	r[words] = 0;
	return (r);
}

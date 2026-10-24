/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdalma <mabdalma@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 08:14:22 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/24 08:14:22 by mabdalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **split)
{
	size_t	x;

	x = 0;
	while (split[x])
	{
		free(split[x]);
		x++;
	}
	free(split);
}

static size_t	c_word(const char *str, char c)
{
	size_t	x;
	size_t	words;

	if (!str)
		return (0);
	x = 0;
	words = 0;
	while (str[x])
	{
		while (str[x] == c)
			x++;
		if (!str[x])
			break ;
		words++;
		while (str[x] && str[x] != c)
			x++;
	}
	return (words);
}

static size_t	ft_strsize(const char *s, char c)
{
	size_t	x;

	x = 0;
	while (s[x] != c && s[x] != '\0')
		x++;
	return (x);
}

static char	**ft_fill(char **split, const char *s, char c, size_t lslen)
{
	size_t	i;
	size_t	len;
	size_t	x;

	x = 0;
	i = 0;
	while (i < lslen)
	{
		while (s[x] == c)
			x++;
		len = ft_strsize(&s[x], c);
		split[i] = malloc((len + 1) * sizeof(char));
		if (!split[i])
		{
			ft_free(split);
			return (NULL);
		}
		ft_strlcpy(split[i], &s[x], len + 1);
		x = x + len;
		i++;
	}
	split[i] = NULL;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	i;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = c_word(s, c);
	split = malloc((word_count + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = word_count;
	while (i)
	{
		split[i] = NULL;
		i--;
	}
	split[0] = NULL;
	return (ft_fill(split, s, c, word_count));
}

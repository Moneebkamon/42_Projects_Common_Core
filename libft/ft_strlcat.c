/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdalma <mabdalma@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 08:14:54 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/24 08:14:55 by mabdalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *des, const char *src, size_t l)
{
	size_t	srclen;
	size_t	i;
	size_t	j;

	srclen = ft_strlen(src);
	if (l == 0 || des == NULL)
		return (srclen);
	j = 0;
	while (des[j] && j < l)
		j++;
	if (j == l)
		return (j + srclen);
	i = 0;
	while (i < l - j - 1 && src[i])
	{
		des[j + i] = src[i];
		i++;
	}
	des[j + i] = '\0';
	return (j + srclen);
}

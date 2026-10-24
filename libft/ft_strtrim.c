/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdalma <mabdalma@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 08:15:42 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/24 08:15:43 by mabdalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	x;
	size_t	l;
	char	*trm;

	if (!s1 || !set)
		return (NULL);
	x = 0;
	if (s1[x] == '\0')
		return (ft_strdup(""));
	while (s1[x] && ft_strchr(set, s1[x]))
		x++;
	l = ft_strlen(s1) - 1;
	while (l > x && ft_strchr(set, s1[l]))
		l--;
	if (x > l)
		return (ft_strdup(""));
	trm = (char *)malloc(sizeof(char) * (l - x + 2));
	if (!trm)
		return (NULL);
	ft_strlcpy(trm, s1 + x, l - x + 2);
	return (trm);
}

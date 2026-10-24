/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdalma <mabdalma@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 08:15:00 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/24 08:15:01 by mabdalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *des, const char *src, size_t l)
{
	size_t	a;
	size_t	sl;

	sl = ft_strlen(src);
	if (l == 0)
		return (sl);
	a = 0;
	while (a < l - 1 && src[a])
	{
		des[a] = src[a];
		a++;
	}
	des[a] = '\0';
	return (sl);
}

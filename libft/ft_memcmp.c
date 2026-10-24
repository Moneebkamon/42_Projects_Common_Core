/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdalma <mabdalma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 13:58:37 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/14 13:58:44 by mabdalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			x;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	x = 0;
	while (x < n)
	{
		if (p1[x] != p2[x])
			return (p1[x] - p2[x]);
		x++;
	}
	return (0);
}

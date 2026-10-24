/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdalma <mabdalma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 13:57:55 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/14 15:32:37 by mabdalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	unsigned char	*p;
	size_t			x;

	p = (unsigned char *)ptr;
	x = 0;
	while (x < n)
	{
		if (p[x] == (unsigned char)c)
			return ((void *)&p[x]);
		x++;
	}
	return (NULL);
}

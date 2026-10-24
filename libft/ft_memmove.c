/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdalma <mabdalma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 13:59:31 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/14 14:10:21 by mabdalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	lopmv(unsigned char *d, unsigned char *s, size_t x)
{
	size_t	a;

	if (d < s)
	{
		a = 0;
		while (a < x)
		{
			d[a] = s[a];
			a++;
		}
	}
	else if (d > s)
	{
		a = x;
		while (a > 0)
		{
			a--;
			d[a] = s[a];
		}
	}
}

void	*ft_memmove(void *des, const void *src, size_t x)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)des;
	s = (unsigned char *)src;
	if (des == NULL && src == NULL)
		return (NULL);
	lopmv(d, s, x);
	return (des);
}

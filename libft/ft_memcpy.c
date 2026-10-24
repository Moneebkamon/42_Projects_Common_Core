/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdalma <mabdalma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 13:59:05 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/14 13:59:14 by mabdalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *des, const void *src, size_t x)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			a;

	a = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)des;
	if (des == NULL && src == NULL)
		return (NULL);
	while (a < x)
	{
		d[a] = s[a];
		a++;
	}
	return (des);
}

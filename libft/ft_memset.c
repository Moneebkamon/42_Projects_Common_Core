/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdalma <mabdalma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 14:11:29 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/14 14:12:03 by mabdalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t i)
{
	unsigned char	*p;
	size_t			a;

	p = (unsigned char *)ptr;
	a = 0;
	while (a < i)
	{
		p[a] = (unsigned char)x;
		a++;
	}
	return (ptr);
}

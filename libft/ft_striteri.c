/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdalma <mabdalma@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 08:14:46 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/24 08:14:47 by mabdalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	x;
	size_t	i;

	if (!s || !f)
		return ;
	i = ft_strlen(s);
	x = 0;
	while (x < i)
	{
		f((unsigned int)x, &s[x]);
		x++;
	}
}

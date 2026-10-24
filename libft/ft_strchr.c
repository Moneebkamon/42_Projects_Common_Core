/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdalma <mabdalma@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 08:14:31 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/24 08:14:32 by mabdalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (str[x] == (char)c)
			return ((char *)&str[x]);
		x++;
	}
	if (str[x] == (char)c)
		return ((char *)&str[x]);
	return (NULL);
}

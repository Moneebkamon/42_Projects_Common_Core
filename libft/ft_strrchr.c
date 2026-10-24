/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdalma <mabdalma@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 08:15:34 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/24 08:15:35 by mabdalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	x;
	char	*ptr;

	x = 0;
	ptr = NULL;
	while (str[x])
	{
		if ((unsigned char)c == (unsigned char)str[x])
			ptr = (char *)&str[x];
		x++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)&str[x]);
	return (ptr);
}

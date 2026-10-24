/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdalma <mabdalma@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 08:15:26 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/24 08:15:27 by mabdalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t	i;
	size_t	x;

	if (needle == NULL || *needle == '\0')
		return ((char *)hay);
	x = 0;
	i = 0;
	while (x < len && hay[x])
	{
		while (needle[i] == hay[x + i] && needle[i] != '\0'
			&& hay[x + i] != '\0' && (x + i) < len)
		{
			if (needle[i + 1] == '\0')
				return ((char *)&hay[x]);
			i++;
		}
		i = 0;
		x++;
	}
	return (NULL);
}

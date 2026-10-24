/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabdalma <mabdalma@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 08:15:13 by mabdalma          #+#    #+#             */
/*   Updated: 2026/10/24 08:15:14 by mabdalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		x;
	unsigned int		len;
	char				*result;

	if (!s || !f)
		return (NULL);
	x = 0;
	len = ft_strlen(s);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	while (x < len)
	{
		result[x] = f(x, s[x]);
		x++;
	}
	result[x] = '\0';
	return (result);
}
